<?php
/**
 * @file
 * hr_tools_resume_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_resume_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_tools_resume_search_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function hr_tools_resume_search_default_search_api_index() {
  $items = array();
  $items['resume_index'] = entity_import('search_api_index', '{
    "name" : "Resume Index",
    "machine_name" : "resume_index",
    "description" : null,
    "server" : "search_db",
    "item_type" : "profile2",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "field_resume_education:field_resume_degree_level_term" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resume_education:field_resume_education_institute" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resume_education:field_resume_field_of_study" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_resume_job_preferences:field_resume_career_status" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_resume_job_preferences:field_resume_jobpref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resume_work_xp:field_resume_xp_occupation_field" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_resume_work_xp:field_resume_xp_organization" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resume_education:field_resume_field_of_study:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_resume_languages:field_resume_languages_level:term" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resume_skills_general:field_resume_skills_gen_level:term:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_resume_skills_it:field_resume_skills_it_level:term:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        }
      },
      "data_alter_callbacks" : {
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "-50", "settings" : { "mode" : "page" } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-49",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-47", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_viewed" : true } }
        },
        "content_taxonomy_autocomplete_moderated_terms" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "search_api_viewed" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
