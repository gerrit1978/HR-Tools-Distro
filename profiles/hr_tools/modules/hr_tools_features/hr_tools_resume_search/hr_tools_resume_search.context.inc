<?php
/**
 * @file
 * hr_tools_resume_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_tools_resume_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resume_search_facets';
  $context->description = 'Display search api facets in resume search';
  $context->tag = 'hr_tools_resume_search';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'resume_search:page' => 'resume_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-8sBiiPBITeKf7eZrqXIaKpq2r1300Qaq' => array(
          'module' => 'facetapi',
          'delta' => '8sBiiPBITeKf7eZrqXIaKpq2r1300Qaq',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-H5mTucsi9CPpk1zZelBJnI4524FhiCWP' => array(
          'module' => 'facetapi',
          'delta' => 'H5mTucsi9CPpk1zZelBJnI4524FhiCWP',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-YCfx09KWPlH59xa00hm4KIv8YCdgmElE' => array(
          'module' => 'facetapi',
          'delta' => 'YCfx09KWPlH59xa00hm4KIv8YCdgmElE',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-nWUQE2b31YlznPiui71oEgQcjYStQzsl' => array(
          'module' => 'facetapi',
          'delta' => 'nWUQE2b31YlznPiui71oEgQcjYStQzsl',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-tD1cpfv0FAMAPqPMP9YBd1B7FTx3vqip' => array(
          'module' => 'facetapi',
          'delta' => 'tD1cpfv0FAMAPqPMP9YBd1B7FTx3vqip',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-IcTh1vu19YBeYpFms6oUHVuKIYio52z9' => array(
          'module' => 'facetapi',
          'delta' => 'IcTh1vu19YBeYpFms6oUHVuKIYio52z9',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-2yDQMjzF4EbzXtdnor4IB1e4LfFuRX1S' => array(
          'module' => 'facetapi',
          'delta' => '2yDQMjzF4EbzXtdnor4IB1e4LfFuRX1S',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-0mrnov1CPb0hRILnNuUd8sYonci27dU5' => array(
          'module' => 'facetapi',
          'delta' => '0mrnov1CPb0hRILnNuUd8sYonci27dU5',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display search api facets in resume search');
  t('hr_tools_resume_search');
  $export['resume_search_facets'] = $context;

  return $export;
}
