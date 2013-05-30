<?php
/**
 * @file
 * hr_tools_menu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_tools_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general_context';
  $context->description = 'A context which is always present';
  $context->tag = 'theme';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context which is always present');
  t('theme');
  $export['general_context'] = $context;

  return $export;
}
