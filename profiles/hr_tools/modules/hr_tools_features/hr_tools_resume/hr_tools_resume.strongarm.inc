<?php
/**
 * @file
 * hr_tools_resume.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_tools_resume_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_resume';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_resume'] = $strongarm;

  return $export;
}
