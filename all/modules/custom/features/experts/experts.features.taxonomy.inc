<?php
/**
 * @file
 * experts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function experts_taxonomy_default_vocabularies() {
  return array(
    'area_of_expertise' => array(
      'name' => 'Area of Expertise',
      'machine_name' => 'area_of_expertise',
      'description' => 'Area of Expertise',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
