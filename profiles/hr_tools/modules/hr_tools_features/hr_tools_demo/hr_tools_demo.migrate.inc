<?php
/**
 * @file
 *  Base migration class for HR Tools Demo.
 */

/**
 * Common features for all the migrations.
 */
abstract class HrToolsMigration extends Migration {

  public function __construct() {
    parent::__construct();
    ini_set('auto_detect_line_endings', TRUE);
  }

  public function processImport(array $options = array()) {
    parent::processImport($options = array());
    // Do not force menu rebuilding. Otherwise pathauto will try to rebuild
    // on each node_insert invocation.
    variable_set('menu_rebuild_needed', FALSE);
  }

  function addTermFieldMapping($destination_field, $source_field = NULL, $warn_on_override = TRUE) {
    $this->addFieldMapping($destination_field, $source_field, $warn_on_override)->separator(',');
  }

  /**
   * Helper function to parse from to Date fields.
   *
   * @param stdClass
   *   Object containing raw source data.
   */
  public function _parsePeriod(&$row, $field) {
    // Check for and add end date to time period.
    $period_temp = explode(' to ', $row->{$field});

    if (count($period_temp) === 2) {
      $date_data = array(
        'from' => (string) $period_temp[0],
        'to' => (string) $period_temp[1],
      );
      $row->{$field} = drupal_json_encode($date_data);
    }
  }

}


/**
 * Class for importing basic pages.
 */
abstract class HrToolsJobMigration extends HrToolsMigration {

  /**
   * The csv file path.
   */
  var $path;

  /**
   * The job content type (eg.: job_template).
   */
  var $type;

  public function __construct() {
//    $this->sourceFields['level'] = t('Term level, extracted in prepareRow()');

    parent::__construct();
    $this->description = t('Import job nodes of type ' . $this->type);
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'dummy_id' => array(
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
          ),
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $csvcolumns = array();
    $options = array('header_rows' => 1);
    $this->source = new MigrateSourceCSV($this->path, $csvcolumns, $options);

    $this->destination = new MigrateDestinationNode($this->type, array('text_format' => 'full_html'));

    // Add field mappings common for all job types.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_job_workflow_state', 'workflow_state');
    $this->addFieldMapping('field_job_company_name', 'organization');
    $this->addFieldMapping('field_job_location', 'location');

    $this->addTermFieldMapping('field_job_occupational_fields', 'occupational_fields');
    $this->addTermFieldMapping('field_job_fields_of_study', 'fields_of_study');
    $this->addTermFieldMapping('field_job_employment_type', 'employment_type');
    $this->addTermFieldMapping('field_job_years_of_experience', 'experience');
    $this->addTermFieldMapping('field_job_languages', 'languages');

    $this->addFieldMapping('field_job_application_email', 'application_email');

    $this->addTermFieldMapping('field_job_skills_it', 'it_skills');
    $this->addTermFieldMapping('field_job_skills_general', 'general_skills');

    $this->addFieldMapping('field_job_salary', 'salary');
    $this->addTermFieldMapping('field_job_required_degree_level', 'degree_level');
  }

  function addTermFieldMapping($destination_field, $source_field = NULL, $warn_on_override = TRUE) {
    $this->addFieldMapping($destination_field, $source_field, $warn_on_override)->separator(',');
  }

}

/**
 * Class for importing job per template.
 */
class HrToolsJobTemplateMigration extends HrToolsJobMigration {

  public function __construct() {
    $this->path = drupal_get_path('module', 'hr_tools_demo') . '/import/job_template.csv';
    $this->type = 'job_template';
    parent::__construct();
  }

}
