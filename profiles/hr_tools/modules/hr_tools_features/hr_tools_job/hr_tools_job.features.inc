<?php
/**
 * @file
 * hr_tools_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_job_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_tools_job_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function hr_tools_job_flag_default_flags() {
  $flags = array();
  // Exported flag: "Job bookmarks".
  $flags['job_bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Job bookmarks',
    'global' => '0',
    'types' => array(
      0 => 'job_external',
      1 => 'job_template',
    ),
    'flag_short' => 'Bookmark job',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark job',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '30037204',
        1 => '115362423',
        2 => '29617163',
      ),
      'unflag' => array(
        0 => '30037204',
        1 => '115362423',
        2 => '29617163',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'hr_tools_job',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function hr_tools_job_node_info() {
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

/**
 * Implements hook_default_rules_link().
 */
function hr_tools_job_default_rules_link() {
  $items = array();
  $items['job_publish'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "publish",
      "link_type" : "token",
      "bundles" : { "job_external" : "job_external", "job_template" : "job_template" },
      "entity_link" : 1
    },
    "name" : "job_publish",
    "label" : "Job publish",
    "path" : "job_publish",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['job_unpublish'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "unpublish",
      "link_type" : "confirm",
      "bundles" : { "job_external" : "job_external", "job_template" : "job_template" },
      "entity_link" : 1,
      "confirm_question" : "Are you sure you want to unpublish the selected job?",
      "confirm_description" : "The job will be hidden and needs to be manually published again."
    },
    "name" : "job_unpublish",
    "label" : "Job unpublish",
    "path" : "job_unpublish",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
