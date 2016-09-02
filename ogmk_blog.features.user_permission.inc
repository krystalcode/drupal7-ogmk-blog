<?php
/**
 * @file
 * ogmk_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ogmk_post content'.
  $permissions['create ogmk_post content'] = array(
    'name' => 'create ogmk_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_post content'.
  $permissions['delete any ogmk_post content'] = array(
    'name' => 'delete any ogmk_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_post content'.
  $permissions['delete own ogmk_post content'] = array(
    'name' => 'delete own ogmk_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ogmk_post content'.
  $permissions['edit any ogmk_post content'] = array(
    'name' => 'edit any ogmk_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ogmk_post content'.
  $permissions['edit own ogmk_post content'] = array(
    'name' => 'edit own ogmk_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set ogmk_post published on date'.
  $permissions['set ogmk_post published on date'] = array(
    'name' => 'set ogmk_post published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  return $permissions;
}
