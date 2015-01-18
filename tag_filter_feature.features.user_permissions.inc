<?php
/**
 * @file
 * tag_filter_feature.features.user_permission.inc
 */

/**
 * Implements hmtok_user_default_permissions().
 */
function tag_filter_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag tag_filter'.
  $permissions['flag tag_filter'] = array(
    'name' => 'flag tag_filter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag tag_filter'.
  $permissions['unflag tag_filter'] = array(
    'name' => 'unflag tag_filter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
