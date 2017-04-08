<?php
/**
 * @file
 * publication.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function publication_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_publication_type'.
  $field_bases['field_publication_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_publication_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Book' => 'Book',
        'Subject Guide' => 'Subject Guide',
        'Article' => 'Article',
        'Blog post' => 'Blog post',
        'Vita Brevis' => 'Vita Brevis',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
