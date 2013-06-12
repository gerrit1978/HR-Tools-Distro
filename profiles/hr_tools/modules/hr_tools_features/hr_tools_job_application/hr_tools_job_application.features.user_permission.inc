<?php
/**
 * @file
 * hr_tools_job_application.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_tools_job_application_user_default_permissions() {
  $permissions = array();

  // Exported permission: create job_application content.
  $permissions['create job_application content'] = array(
    'name' => 'create job_application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any job_application content.
  $permissions['delete any job_application content'] = array(
    'name' => 'delete any job_application content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own job_application content.
  $permissions['delete own job_application content'] = array(
    'name' => 'delete own job_application content',
    'roles' => array(
      0 => 'administrator',
      1 => 'applicant',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any job_application content.
  $permissions['edit any job_application content'] = array(
    'name' => 'edit any job_application content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own job_application content.
  $permissions['edit own job_application content'] = array(
    'name' => 'edit own job_application content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
