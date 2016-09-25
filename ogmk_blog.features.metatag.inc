<?php
/**
 * @file
 * ogmk_blog.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ogmk_blog_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ogmk_post.
  $config['node:ogmk_post'] = array(
    'instance' => 'node:ogmk_post',
    'config' => array(
      'image_src' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
      'itemprop:image' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
      'og:image' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:image' => array(
        'value' => '[node:ogmk_image:1110]',
      ),
    ),
  );

  return $config;
}
