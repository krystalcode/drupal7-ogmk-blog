<?php
/**
 * @file
 * ogmk_blog.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ogmk_blog_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'ogmk_blog_labels_ref'.
  $field_bases['ogmk_blog_labels_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_blog_labels_ref',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ogmk_blog_labels',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'title_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
