<?php
/**
 * @file
 * ogmk_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ogmk_blog_taxonomy_default_vocabularies() {
  return array(
    'ogmk_blog_labels' => array(
      'name' => 'Blog Labels',
      'machine_name' => 'ogmk_blog_labels',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
