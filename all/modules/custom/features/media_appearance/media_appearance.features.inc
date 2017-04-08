<?php
/**
 * @file
 * media_appearance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_appearance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function media_appearance_node_info() {
  $items = array(
    'ct_media_appearance' => array(
      'name' => t('Media Appearance'),
      'base' => 'node_content',
      'description' => t('Click here to create content for related tier of type media appearance.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
