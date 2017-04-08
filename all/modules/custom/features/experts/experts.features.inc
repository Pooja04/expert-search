<?php
/**
 * @file
 * experts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function experts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function experts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function experts_node_info() {
  $items = array(
    'experts' => array(
      'name' => t('Experts'),
      'base' => 'node_content',
      'description' => t('Use experts for experts detail information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
