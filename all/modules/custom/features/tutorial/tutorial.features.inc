<?php
/**
 * @file
 * tutorial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tutorial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tutorial_node_info() {
  $items = array(
    'ct_tutorial' => array(
      'name' => t('Tutorial'),
      'base' => 'node_content',
      'description' => t('Click here to create content for related tier of type tutorial.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
