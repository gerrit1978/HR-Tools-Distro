<?php
/**
 * @file
 * hr_tools_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_tools_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_tools_front';
  $context->description = 'Front page blocks';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_page_job_search-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_job_search-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'facetapi-BES9Q23mpuaDFz35j0TREhrVibIlC1AD' => array(
          'module' => 'facetapi',
          'delta' => 'BES9Q23mpuaDFz35j0TREhrVibIlC1AD',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-xjPcV0QHgJfde4QFOy4CwnuTEFAED9ZO' => array(
          'module' => 'facetapi',
          'delta' => 'xjPcV0QHgJfde4QFOy4CwnuTEFAED9ZO',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page blocks');
  t('front');
  $export['hr_tools_front'] = $context;

  return $export;
}
