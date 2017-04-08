<?php
/**
 * @file
 * speaking_engagement_topic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speaking_engagement_topic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function speaking_engagement_topic_node_info() {
  $items = array(
    'ct_speaking_engagement_topic' => array(
      'name' => t('Speaking Engagement Topic'),
      'base' => 'node_content',
      'description' => t('Click here to create content for related tier of type speaking engagement topic.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
