<?php
/**
 * @file
 * hr_tools_job.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_tools_job_user_default_permissions() {
  $permissions = array();

  // Exported permission: access rules link job_publish.
  $permissions['access rules link job_publish'] = array(
    'name' => 'access rules link job_publish',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: access rules link job_unpublish.
  $permissions['access rules link job_unpublish'] = array(
    'name' => 'access rules link job_unpublish',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: create field_job_workflow_state.
  $permissions['create field_job_workflow_state'] = array(
    'name' => 'create field_job_workflow_state',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create job_external content.
  $permissions['create job_external content'] = array(
    'name' => 'create job_external content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: create job_template content.
  $permissions['create job_template content'] = array(
    'name' => 'create job_template content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any job_external content.
  $permissions['delete any job_external content'] = array(
    'name' => 'delete any job_external content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any job_template content.
  $permissions['delete any job_template content'] = array(
    'name' => 'delete any job_template content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own job_external content.
  $permissions['delete own job_external content'] = array(
    'name' => 'delete own job_external content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own job_template content.
  $permissions['delete own job_template content'] = array(
    'name' => 'delete own job_template content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any job_external content.
  $permissions['edit any job_external content'] = array(
    'name' => 'edit any job_external content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any job_template content.
  $permissions['edit any job_template content'] = array(
    'name' => 'edit any job_template content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_job_workflow_state.
  $permissions['edit field_job_workflow_state'] = array(
    'name' => 'edit field_job_workflow_state',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_job_workflow_state.
  $permissions['edit own field_job_workflow_state'] = array(
    'name' => 'edit own field_job_workflow_state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own job_external content.
  $permissions['edit own job_external content'] = array(
    'name' => 'edit own job_external content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own job_template content.
  $permissions['edit own job_template content'] = array(
    'name' => 'edit own job_template content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: view field_job_workflow_state.
  $permissions['view field_job_workflow_state'] = array(
    'name' => 'view field_job_workflow_state',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_job_workflow_state.
  $permissions['view own field_job_workflow_state'] = array(
    'name' => 'view own field_job_workflow_state',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'job administrator',
      3 => 'recruiter',
    ),
    'module' => 'node',
  );

  return $permissions;
}
