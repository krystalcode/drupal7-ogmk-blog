<?php

/**
 * @file
 * Pathauto integration for the ogmk_blog module.
 *
 * @ingroup pathauto
 */

/**
 * Batch processing callback; Generate aliases for shop blogs.
 */
function _ogmk_blog__pathauto_bulk_update_batch_process(&$context) {
  if (!isset($context['sandbox']['current'])) {
    $context['sandbox']['count'] = 0;
    $context['sandbox']['current'] = 0;
  }

  $query = db_select('node', 'n');
  $query->leftJoin('url_alias', 'ua', "CONCAT('ogmk_blog/', n.nid) = ua.source");
  $query->addField('n', 'nid');
  $query->isNull('ua.source');
  $query->condition('n.type', 'ogmk_shop');
  $query->condition('n.nid', $context['sandbox']['current'], '>');
  $query->orderBy('n.nid');
  $query->addTag('pathauto_bulk_update');
  $query->addMetaData('entity', 'node');

  // Get the total amount of items to process.
  if (!isset($context['sandbox']['total'])) {
    $context['sandbox']['total'] = $query->countQuery()->execute()->fetchField();

    // If there are no nodes to update, then stop immediately.
    if (!$context['sandbox']['total']) {
      $context['finished'] = 1;
      return;
    }
  }

  $query->range(0, 25);
  $nids = $query->execute()->fetchCol();

  ogmk_blog_pathauto_update_alias_multiple($nids, 'bulkupdate');
  $context['sandbox']['count'] += count($nids);
  $context['sandbox']['current'] = max($nids);
  $context['message'] = t('Updated alias for node @nid.', array('@nid' => end($nids)));

  if ($context['sandbox']['count'] != $context['sandbox']['total']) {
    $context['finished'] = $context['sandbox']['count'] / $context['sandbox']['total'];
  }
}

/**
 * Update the URL aliases for an individual shop blog.
 *
 * @param $node
 *   A node object of ogmk_shop type.
 * @param $op
 *   Operation being performed on the node ('insert', 'update' or 'bulkupdate').
 * @param $options
 *   An optional array of additional options.
 */
function ogmk_blog_pathauto_update_alias(stdClass $node, $op, array $options = array()) {
  // Skip processing if the node has no pattern.
  if (!pathauto_pattern_load_by_entity('ogmk_blog', '')) {
    return FALSE;
  }

  module_load_include('inc', 'pathauto');
  return pathauto_create_alias('ogmk_blog', $op, "ogmk_blog/$node->nid", array('node' => $node));
}

/**
 * Update the URL aliases for multiple shop blogs.
 *
 * @param $nids
 *   An array of node IDs of ogmk_shop type.
 * @param $op
 *   Operation being performed on the nodes ('insert', 'update' or
 *   'bulkupdate').
 * @param $options
 *   An optional array of additional options.
 */
function ogmk_blog_pathauto_update_alias_multiple(array $nids, $op, array $options = array()) {
  $nodes = node_load_multiple($nids);
  foreach ($nodes as $node) {
    if ($node->type === 'ogmk_shop') {
      ogmk_blog_pathauto_update_alias($node, $op, $options);
    }
  }

  if (!empty($options['message'])) {
    drupal_set_message(format_plural(count($nids), 'Updated URL alias for 1 shop node.', 'Updated URL aliases for @count shop nodes.'));
  }
}
