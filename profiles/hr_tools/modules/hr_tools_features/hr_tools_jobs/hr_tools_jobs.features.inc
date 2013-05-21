<?php
/**
 * @file
 * hr_tools_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_tools_jobs_node_info() {
  $items = array(
    'job_template' => array(
      'name' => t('Job template'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
