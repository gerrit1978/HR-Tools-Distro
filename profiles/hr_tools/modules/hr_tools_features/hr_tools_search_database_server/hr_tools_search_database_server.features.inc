<?php
/**
 * @file
 * hr_tools_search_database_server.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function hr_tools_search_database_server_default_search_api_server() {
  $items = array();
  $items['search_db'] = entity_import('search_api_server', '{
    "name" : "Search DB",
    "machine_name" : "search_db",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "job_index" : {
          "field_job_company" : {
            "table" : "search_api_db_job_index_field_job_company",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_company_name" : {
            "table" : "search_api_db_job_index_field_job_company_name",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_description" : {
            "table" : "search_api_db_job_index_field_job_description",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_employment_type" : {
            "table" : "search_api_db_job_index_field_job_employment_type",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_fields_of_study" : {
            "table" : "search_api_db_job_index_field_job_fields_of_study",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_languages" : {
            "table" : "search_api_db_job_index_field_job_languages",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_location" : {
            "table" : "search_api_db_job_index_field_job_location",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_occupational_fields" : {
            "table" : "search_api_db_job_index_field_job_occupational_fields",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_required_degree_level" : {
            "table" : "search_api_db_job_index_field_job_required_degree_level",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_skills_general" : {
            "table" : "search_api_db_job_index_field_job_skills_general",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_skills_it" : {
            "table" : "search_api_db_job_index_field_job_skills_it",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_job_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
