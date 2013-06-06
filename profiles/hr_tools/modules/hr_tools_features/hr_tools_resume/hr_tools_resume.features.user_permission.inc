<?php
/**
 * @file
 * hr_tools_resume.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_tools_resume_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any resume profile.
  $permissions['edit any resume profile'] = array(
    'name' => 'edit any resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own resume profile.
  $permissions['edit own resume profile'] = array(
    'name' => 'edit own resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'applicant',
      2 => 'content administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any resume profile.
  $permissions['view any resume profile'] = array(
    'name' => 'view any resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'recruiter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own resume profile.
  $permissions['view own resume profile'] = array(
    'name' => 'view own resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'applicant',
      2 => 'content administrator',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
