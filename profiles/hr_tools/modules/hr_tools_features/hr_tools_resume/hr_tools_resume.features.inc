<?php
/**
 * @file
 * hr_tools_resume.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_resume_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function hr_tools_resume_flag_default_flags() {
  $flags = array();
  // Exported flag: "Resume bookmarks".
  $flags['resume_bookmarks'] = array(
    'content_type' => 'profile2',
    'title' => 'Resume bookmarks',
    'global' => '0',
    'types' => array(
      0 => 'resume',
    ),
    'flag_short' => 'Bookmark resume',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark resume',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '30037204',
        1 => '100482362',
        2 => '29617163',
      ),
      'unflag' => array(
        0 => '30037204',
        1 => '100482362',
        2 => '29617163',
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'module' => 'hr_tools_resume',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_default_profile2_type().
 */
function hr_tools_resume_default_profile2_type() {
  $items = array();
  $items['resume'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "resume",
    "label" : "Resume",
    "weight" : "0",
    "data" : { "use_page" : 1, "page_path" : "resume" },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function hr_tools_resume_default_rules_link() {
  $items = array();
  $items['resume_set_hidden'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Hide resume",
      "link_type" : "confirm",
      "bundles" : { "resume" : "resume" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure you want to hide your resume?",
      "confirm_description" : "Hiding your resume will exclude you from searches and being contacted by companies. You can always re-activate your resume. "
    },
    "name" : "resume_set_hidden",
    "label" : "Resume set hidden",
    "path" : "resume_set_hidden",
    "entity_type" : "profile2",
    "rdf_mapping" : []
  }');
  $items['resume_set_visible'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Show resume",
      "link_type" : "token",
      "bundles" : { "resume" : "resume" },
      "entity_link" : 0
    },
    "name" : "resume_set_visible",
    "label" : "Resume set visible",
    "path" : "resume_set_visible",
    "entity_type" : "profile2",
    "rdf_mapping" : []
  }');
  return $items;
}
