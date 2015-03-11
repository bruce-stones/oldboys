<?php
/**
 * @file
 * ob_sport.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ob_sport_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sport content'.
  $permissions['create sport content'] = array(
    'name' => 'create sport content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sport content'.
  $permissions['delete any sport content'] = array(
    'name' => 'delete any sport content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sport content'.
  $permissions['delete own sport content'] = array(
    'name' => 'delete own sport content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sport content'.
  $permissions['edit any sport content'] = array(
    'name' => 'edit any sport content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sport content'.
  $permissions['edit own sport content'] = array(
    'name' => 'edit own sport content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
