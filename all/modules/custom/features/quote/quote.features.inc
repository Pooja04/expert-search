<?php
/**
 * @file
 * quote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quote_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function quote_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function quote_node_info() {
  $items = array(
    'ct_quote' => array(
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => t('Click here to create content for quotes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
