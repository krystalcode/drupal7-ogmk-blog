<?php
/**
 * @file
 * ogmk_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ogmk_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ogmk_post';
  $strongarm->value = 0;
  $export['comment_anonymous_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ogmk_post';
  $strongarm->value = 1;
  $export['comment_default_mode_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ogmk_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ogmk_post';
  $strongarm->value = 1;
  $export['comment_form_location_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ogmk_post';
  $strongarm->value = '2';
  $export['comment_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ogmk_post';
  $strongarm->value = '0';
  $export['comment_preview_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ogmk_post';
  $strongarm->value = 0;
  $export['comment_subject_field_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_ogmk_post';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_ogmk_post';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__ogmk_post';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__ogmk_blog_labels';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_taxonomy_term__ogmk_blog_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ogmk_post';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'info' => array(
        'custom_settings' => FALSE,
      ),
      'ogmk_bootstrap_media' => array(
        'custom_settings' => TRUE,
      ),
      'ogmk_manage_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'rss' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'ogmk_bootstrap_media' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ogmk_post';
  $strongarm->value = '4';
  $export['language_content_type_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ogmk_post';
  $strongarm->value = array();
  $export['menu_options_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ogmk_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ogmk_post';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ogmk_post';
  $strongarm->value = '0';
  $export['node_preview_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ogmk_post';
  $strongarm->value = 1;
  $export['node_submitted_ogmk_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_post_en_pattern';
  $strongarm->value = 'posts/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_post_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_post_es_pattern';
  $strongarm->value = 'postes/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_post_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_post_pattern';
  $strongarm->value = 'posts/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ogmk_post_und_pattern';
  $strongarm->value = 'posts/[node:nid]/[node:title]';
  $export['pathauto_node_ogmk_post_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ogmk_blog_pattern';
  $strongarm->value = 'shops/[node:nid]/blog';
  $export['pathauto_ogmk_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ogmk_blog_labels_pattern';
  $strongarm->value = 'blog/labels/[term:tid]/[term:name]';
  $export['pathauto_taxonomy_term_ogmk_blog_labels_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ogmk_post';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ogmk_post'] = $strongarm;

  return $export;
}
