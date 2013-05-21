<?php
/**
 * @file
 * hr_tools_job_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_job_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_tools_job_types_node_info() {
  $items = array(
    'job_external' => array(
      'name' => t('Job External'),
      'base' => 'node_content',
      'description' => t('A job, containing the same fields as a job template, but with an external URL.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'job_template' => array(
      'name' => t('Job Template'),
      'base' => 'node_content',
      'description' => t('A job with a number of fields.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
