<?php
/**
 * @file
 * Jobs per template migration class for HR Tools Demo.
 */

/**
 * Class for importing job per template.
 */
class HrToolsJobPerTemplateMigration extends HrToolsJobMigration {

  public function __construct() {
    $this->path = drupal_get_path('module', 'hr_tools_demo') . '/import/job_template.csv';
    $this->type = 'job_template';
    parent::__construct();
  }

}
