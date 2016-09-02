<?php
/**
 * @file
 * ogmk_blog.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ogmk_blog_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:ogmk_shop:access authoring options of ogmk_post content'
  $permissions['node:ogmk_shop:access authoring options of ogmk_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:access publishing options of ogmk_post content'
  $permissions['node:ogmk_shop:access publishing options of ogmk_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:access revisions options of ogmk_post content'
  $permissions['node:ogmk_shop:access revisions options of ogmk_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:create ogmk_post content'
  $permissions['node:ogmk_shop:create ogmk_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:delete any ogmk_post content'
  $permissions['node:ogmk_shop:delete any ogmk_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:delete own ogmk_post content'
  $permissions['node:ogmk_shop:delete own ogmk_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:update any ogmk_post content'
  $permissions['node:ogmk_shop:update any ogmk_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  // Exported og permission: 'node:ogmk_shop:update own ogmk_post content'
  $permissions['node:ogmk_shop:update own ogmk_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_shop:view any unpublished ogmk_post content'
  $permissions['node:ogmk_shop:view any unpublished ogmk_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager member' => 'manager member',
    ),
  );

  return $permissions;
}
