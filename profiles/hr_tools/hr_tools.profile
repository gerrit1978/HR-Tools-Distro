<?php
/**
 * @file
 * Contains some hooks that are used during installation.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function hr_tools_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate some fields.
  $form['site_information']['site_name']['#default_value'] = t('HR Tools');
  $form['site_information']['site_mail']['#default_value'] = 'gerrit@hedgecomm.be';

  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'gerrit@hedgecomm.be';

  $form['server_settings']['site_default_country']['#default_value'] = 'BE';

  $form['update_notifications']['update_status_module']['#default_value'] = array(1);

  // Private file directory
  $form['file_system'] = array(
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#title' => t('File system'),
  );
  $form['file_system']['file_private_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Private file system path'),
    '#default_value' => variable_get('file_private_path', 'sites/default/files/private'),
    '#maxlength' => 255,
    '#description' => t('An existing local file system path for storing private files which is needed by the resume feature and during the import of demo data. It should be writable by Drupal and not accessible over the web. Note that non-Apache web servers may need additional configuration to secure private file directories. See the online handbook for <a href="@handbook">more information about securing private files</a>.', array('@handbook' => 'http://drupal.org/documentation/modules/file')),
    '#after_build' => array('system_check_directory'),
    '#required' => TRUE,
  );

  $form['#submit'][] = 'hr_tools_install_configure_form_submit';
}

/**
 * Submit callback.
 */
function hr_tools_install_configure_form_submit(&$form, &$form_state) {

  // Set the private files directory variable.
  variable_set('file_private_path', $form_state['values']['file_private_path']);
}

/**
 * Implements hook_install_tasks().
 */
function hr_tools_install_tasks($install_state) {
  $tasks = array(
    'hr_tools_enable_theme' => array(
      'display_name' => st('Enable default themes'),
    ),
  );
  return $tasks;
}


/**
 * Task callback for enabling theme.
 */
function hr_tools_enable_theme() {
  // Any themes without keys here will get numeric keys and so will be enabled,
  // but not placed into variables.
  $enable = array(
    'theme_default' => 'hearts',
    'admin_theme' => 'seven',
    //'zen'
  );
  theme_enable($enable);

  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }

  // Disable the default Bartik theme
  theme_disable(array('bartik'));
}