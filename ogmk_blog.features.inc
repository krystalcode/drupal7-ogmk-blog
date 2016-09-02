<?php
/**
 * @file
 * ogmk_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ogmk_blog_node_info() {
  $items = array(
    'ogmk_post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
