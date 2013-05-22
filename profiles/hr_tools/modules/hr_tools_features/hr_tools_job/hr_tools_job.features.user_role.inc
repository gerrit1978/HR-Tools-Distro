<?php
/**
 * @file
 * hr_tools_job.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hr_tools_job_user_default_roles() {
  $roles = array();

  // Exported role: job administrator.
  $roles['job administrator'] = array(
    'name' => 'job administrator',
    'weight' => '3',
    'machine_name' => 'job_admin',
  );

  // Exported role: recruiter.
  $roles['recruiter'] = array(
    'name' => 'recruiter',
    'weight' => '4',
    'machine_name' => 'recruiter',
  );

  return $roles;
}
