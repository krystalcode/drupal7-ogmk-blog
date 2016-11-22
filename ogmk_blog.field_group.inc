<?php
/**
 * @file
 * ogmk_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_blog_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1|node|ogmk_post|form';
  $field_group->group_name = 'group_r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1';
  $field_group->data = array(
    'label' => 'Row 1 Column 1',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'ogmk_text_with_summary',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 1 Column 1',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r1c1|node|ogmk_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1|node|ogmk_post|form';
  $field_group->group_name = 'group_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'group_r1c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1 field-group-bootstrap_grid_row',
        'description' => 'Enter the title and the description of the post.',
      ),
    ),
  );
  $field_groups['group_r1|node|ogmk_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r2c1|node|ogmk_post|form';
  $field_group->group_name = 'group_r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r2';
  $field_group->data = array(
    'label' => 'Row 2 Column 1',
    'weight' => '8',
    'children' => array(
      0 => 'ogmk_image',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 2 Column 1',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r2c1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r2c1|node|ogmk_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r2|node|ogmk_post|form';
  $field_group->group_name = 'group_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'group_r2c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r2 field-group-bootstrap_grid_row',
        'description' => 'Optionally add an image that will show at the top of the post and that will represent the post in listings.',
      ),
    ),
  );
  $field_groups['group_r2|node|ogmk_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r3c1|node|ogmk_post|form';
  $field_group->group_name = 'group_r3c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r3';
  $field_group->data = array(
    'label' => 'Row 3 Column 1',
    'weight' => '5',
    'children' => array(
      0 => 'ogmk_shops_ref',
      1 => 'ogmk_blog_labels_ref',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 3 Column 1',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r3c1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_r3c1|node|ogmk_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r3|node|ogmk_post|form';
  $field_group->group_name = 'group_r3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'group_r3c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r3 field-group-bootstrap_grid_row',
        'description' => 'Enter the shop(s) that the post belongs to, and any labels that describe the content of the post.',
      ),
    ),
  );
  $field_groups['group_r3|node|ogmk_post|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('Media');
  t('Metadata');
  t('Row 1 Column 1');
  t('Row 2 Column 1');
  t('Row 3 Column 1');

  return $field_groups;
}
