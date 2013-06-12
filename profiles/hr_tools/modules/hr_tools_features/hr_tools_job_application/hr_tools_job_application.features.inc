<?php
/**
 * @file
 * hr_tools_job_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_job_application_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_tools_job_application_node_info() {
  $items = array(
    'job_application' => array(
      'name' => t('Job Application'),
      'base' => 'node_content',
      'description' => t('Create a new job application for job offering.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
