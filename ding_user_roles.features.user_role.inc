<?php
/**
 * @file
 * ding_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ding_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 6,
  );

  // Exported role: formidler.
  $roles['formidler'] = array(
    'name' => 'formidler',
    'weight' => 3,
  );

  // Exported role: gæsteblogger.
  $roles['gæsteblogger'] = array(
    'name' => 'gæsteblogger',
    'weight' => 2,
  );

  // Exported role: lokalredaktør.
  $roles['lokalredaktør'] = array(
    'name' => 'lokalredaktør',
    'weight' => 4,
  );

  // Exported role: redaktør.
  $roles['redaktør'] = array(
    'name' => 'redaktør',
    'weight' => 5,
  );

  return $roles;
}
