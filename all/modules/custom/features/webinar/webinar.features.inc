<?php
/**
 * @file
 * webinar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function webinar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function webinar_node_info() {
  $items = array(
    'ct_webinar' => array(
      'name' => t('Webinar'),
      'base' => 'node_content',
      'description' => t('Click here to create content for related tier of type webinar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
