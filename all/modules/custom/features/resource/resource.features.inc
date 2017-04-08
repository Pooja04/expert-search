<?php
/**
 * @file
 * resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function resource_node_info() {
  $items = array(
    'ct_resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Click here to create content for related tier of type resource.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
