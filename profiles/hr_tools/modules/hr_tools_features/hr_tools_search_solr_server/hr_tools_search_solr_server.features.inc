<?php
/**
 * @file
 * hr_tools_search_solr_server.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function hr_tools_search_solr_server_default_search_api_server() {
  $items = array();
  $items['search_solr'] = entity_import('search_api_server', '{
    "name" : "Search SOLR",
    "machine_name" : "search_solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
