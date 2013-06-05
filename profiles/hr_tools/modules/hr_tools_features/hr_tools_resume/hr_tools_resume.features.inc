<?php
/**
 * @file
 * hr_tools_resume.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function hr_tools_resume_default_profile2_type() {
  $items = array();
  $items['resume'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "resume",
    "label" : "Resume",
    "weight" : "0",
    "data" : { "use_page" : 1, "page_path" : "resume" },
    "rdf_mapping" : []
  }');
  return $items;
}
