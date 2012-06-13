<?php
/**
 * @file
 * pagodabox_quickstart_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pagodabox_quickstart_files_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
