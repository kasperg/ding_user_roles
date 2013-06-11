<?php
/**
 * @file
 * ding_user_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ding_user_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'user',
  );

  // Exported permission: administer dibs transactions.
  $permissions['administer dibs transactions'] = array(
    'name' => 'administer dibs transactions',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'dibs',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'user',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'user',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'path',
  );

  // Exported permission: dynamic background configure default.
  $permissions['dynamic background configure default'] = array(
    'name' => 'dynamic background configure default',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: dynamic background upload default.
  $permissions['dynamic background upload default'] = array(
    'name' => 'dynamic background upload default',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: dynamic backgrounds css callback.
  $permissions['dynamic backgrounds css callback'] = array(
    'name' => 'dynamic backgrounds css callback',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: dynamic backgrounds set default.
  $permissions['dynamic backgrounds set default'] = array(
    'name' => 'dynamic backgrounds set default',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: dynamic backgrounds weight.
  $permissions['dynamic backgrounds weight'] = array(
    'name' => 'dynamic backgrounds weight',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: edit any provider_alma profile.
  $permissions['edit any provider_alma profile'] = array(
    'name' => 'edit any provider_alma profile',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own provider_alma profile.
  $permissions['edit own provider_alma profile'] = array(
    'name' => 'edit own provider_alma profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: pay using dibs.
  $permissions['pay using dibs'] = array(
    'name' => 'pay using dibs',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'dibs',
  );

  // Exported permission: view any provider_alma profile.
  $permissions['view any provider_alma profile'] = array(
    'name' => 'view any provider_alma profile',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own provider_alma profile.
  $permissions['view own provider_alma profile'] = array(
    'name' => 'view own provider_alma profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
