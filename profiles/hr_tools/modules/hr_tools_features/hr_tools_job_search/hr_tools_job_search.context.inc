<?php
/**
 * @file
 * hr_tools_job_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_tools_job_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_search_block';
  $context->description = 'Provides the fulltext and region search block for jobs';
  $context->tag = 'hr_tools_job_search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'views' => array(
      'values' => array(
        'job_search' => 'job_search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-job_search-search_page' => array(
          'module' => 'views',
          'delta' => '-exp-job_search-search_page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Provides the fulltext and region search block for jobs');
  t('hr_tools_job_search');
  $export['job_search_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_search_facets';
  $context->description = 'Display search api facets in job search';
  $context->tag = 'hr_tools_job_search';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'job_search' => 'job_search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-v8OT33llPN3ejhlfbqjoLxQDpoQrpr2g' => array(
          'module' => 'facetapi',
          'delta' => 'v8OT33llPN3ejhlfbqjoLxQDpoQrpr2g',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-1UuE3MfhjlTg7j1uMAK8livdLCA02Z0G' => array(
          'module' => 'facetapi',
          'delta' => '1UuE3MfhjlTg7j1uMAK8livdLCA02Z0G',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-f3NI1sU3W53tqHIWtKI29iYIETsskvpC' => array(
          'module' => 'facetapi',
          'delta' => 'f3NI1sU3W53tqHIWtKI29iYIETsskvpC',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-BES9Q23mpuaDFz35j0TREhrVibIlC1AD' => array(
          'module' => 'facetapi',
          'delta' => 'BES9Q23mpuaDFz35j0TREhrVibIlC1AD',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-h2b71amScG8Sx0mG50Kyb4IAkeToqrm3' => array(
          'module' => 'facetapi',
          'delta' => 'h2b71amScG8Sx0mG50Kyb4IAkeToqrm3',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-biw14w9OplyVf8ErbaTpov26uAcU4Reg' => array(
          'module' => 'facetapi',
          'delta' => 'biw14w9OplyVf8ErbaTpov26uAcU4Reg',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-xjPcV0QHgJfde4QFOy4CwnuTEFAED9ZO' => array(
          'module' => 'facetapi',
          'delta' => 'xjPcV0QHgJfde4QFOy4CwnuTEFAED9ZO',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display search api facets in job search');
  t('hr_tools_job_search');
  $export['job_search_facets'] = $context;

  return $export;
}
