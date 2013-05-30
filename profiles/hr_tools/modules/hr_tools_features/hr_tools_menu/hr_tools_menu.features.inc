<?php
/**
 * @file
 * hr_tools_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
