<?php
/**
 * @file
 * hr_tools_resume.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function hr_tools_resume_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'resume';
  $pm_existing_page->label = 'Resume';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'resume';
  $export['resume'] = $pm_existing_page;

  return $export;
}
