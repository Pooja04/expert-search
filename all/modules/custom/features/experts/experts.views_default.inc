<?php
/**
 * @file
 * experts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function experts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Expert_Search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expert Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['label'] = '';
  $handler->display->display_options['fields']['field_expert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_expert_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Area of Expertise */
  $handler->display->display_options['fields']['field_area_of_expertise']['id'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['field'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_of_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_area_of_expertise']['separator'] = '|';
  /* Field: Content: Contact info */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Profle link */
  $handler->display->display_options['fields']['field_profle_link']['id'] = 'field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['table'] = 'field_data_field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['field'] = 'field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['label'] = '';
  $handler->display->display_options['fields']['field_profle_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="feature-expert-wrapper">
<div class="feature-exp-col expert-img">[field_expert_image]</div>
<div class="feature-exp-col expert-info">
<div class="views-field  views-field-title">[title]</div>
<div class="views-field  views-field-designation">[field_designation]</div><div class="views-field  views-field-area-of-expertise">[field_area_of_expertise]</div>
</div>
<div class="feature-exp-col expert-contact-info">
<div class="contact-header">Contact info:</div>
<ul>
<li class="views-field  views-field-contact-info">
	<span class="expert-con-info-icons tel"></span>
	<span class="expert-con-info-text">[field_contact_info]</span>
</li>
<li class="views-field  views-field-email-address">
	<span class="expert-con-info-icons email"></span>
	<span class="expert-con-info-text">[field_email_address]</span>
</li>
<li class="views-field  views-field-profile-link">
	<span class="expert-con-info-icons profile-link"></span>
	<span class="expert-con-info-text">[field_profle_link]</span>
</li>
</ul>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Experts by Experts or Expertise */
  $handler = $view->new_display('page', 'Experts by Experts or Expertise', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Area of Expertise (field_area_of_expertise) */
  $handler->display->display_options['relationships']['field_area_of_expertise_tid']['id'] = 'field_area_of_expertise_tid';
  $handler->display->display_options['relationships']['field_area_of_expertise_tid']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['relationships']['field_area_of_expertise_tid']['field'] = 'field_area_of_expertise_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Area of Expertise */
  $handler->display->display_options['fields']['field_area_of_expertise']['id'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['field'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_of_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_area_of_expertise']['separator'] = '|';
  /* Field: Content: Contact info */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Profle link */
  $handler->display->display_options['fields']['field_profle_link']['id'] = 'field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['table'] = 'field_data_field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['field'] = 'field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['label'] = '';
  $handler->display->display_options['fields']['field_profle_link']['element_label_colon'] = FALSE;
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['label'] = '';
  $handler->display->display_options['fields']['field_expert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_expert_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_area_of_expertise_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="feature-expert-wrapper">
<div class="feature-exp-col expert-img">[field_expert_image]</div>
<div class="feature-exp-col expert-info">
<div class="views-field  views-field-title" title="[title_1]">[title]</div>
<div class="views-field  views-field-designation">[field_designation]</div><div class="views-field  views-field-area-of-expertise">[field_area_of_expertise]</div>
</div>
<div class="feature-exp-col expert-contact-info">
<div class="contact-header">Contact info:</div>
<ul>
<li class="views-field  views-field-contact-info">
	<span class="expert-con-info-icons tel"></span>
	<span class="expert-con-info-text">[field_contact_info]</span>
</li>
<li class="views-field  views-field-email-address">
	<span class="expert-con-info-icons email"></span>
	<span class="expert-con-info-text">[field_email_address]</span>
</li>
<li class="views-field  views-field-profile-link">
	<span class="expert-con-info-icons profile-link"></span>
	<span class="expert-con-info-text">[field_profle_link]</span>
</li>
</ul>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'name' => 'name',
  );
  $handler->display->display_options['path'] = 'expert-search';

  /* Display: Experts by Expertise */
  $handler = $view->new_display('block', 'Experts by Expertise', 'experts_by_expertise');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Experts by Expertise';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_spotlight_target_id']['id'] = 'field_spotlight_target_id';
  $handler->display->display_options['relationships']['field_spotlight_target_id']['table'] = 'field_data_field_spotlight';
  $handler->display->display_options['relationships']['field_spotlight_target_id']['field'] = 'field_spotlight_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['label'] = '';
  $handler->display->display_options['fields']['field_expert_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_expert_image']['settings'] = array(
    'image_style' => 'homepage_slider_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Area of Expertise */
  $handler->display->display_options['fields']['field_area_of_expertise']['id'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['field'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_area_of_expertise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_of_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_area_of_expertise']['separator'] = ' | ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body_1']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body_1']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Contact info */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['exclude'] = TRUE;
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Profle link */
  $handler->display->display_options['fields']['field_profle_link']['id'] = 'field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['table'] = 'field_data_field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['field'] = 'field_profle_link';
  $handler->display->display_options['fields']['field_profle_link']['label'] = '';
  $handler->display->display_options['fields']['field_profle_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profle_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="feature-expert-wrapper">
<div class="feature-exp-col expert-img" title="[title_2]">[field_expert_image]</div>
<div class="feature-exp-col expert-info">
<div class="views-field  views-field-title" title="[title_2]">[title]</div>
<div class="views-field  views-field-designation">[field_designation]</div>
<div class="views-field  views-field-body">[body_1]</div>
<div class="views-field  views-field-area-of-expertise">[field_area_of_expertise]</div>
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Date Format */
  $handler->display->display_options['fields']['field_date_format_type']['id'] = 'field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['table'] = 'field_data_field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['field'] = 'field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_format_type']['label'] = '';
  $handler->display->display_options['fields']['field_date_format_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_format_type']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_date_format_type';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'Month-Year';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[field_date_1]';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_date_format_type';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'Only Year';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '[field_date_2]';
  $handler->display->display_options['fields']['views_conditional_3']['or'] = '[field_date]';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
  $handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_5']['if'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_5']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional_5']['then'] = '[views_conditional_3]';
  $handler->display->display_options['fields']['views_conditional_5']['or'] = '[views_conditional_2]';
  $handler->display->display_options['fields']['views_conditional_5']['strip_tags'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<a href="http://[field_link]">Read More</a>';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Field: Content: StatusType */
  $handler->display->display_options['fields']['field_statustype']['id'] = 'field_statustype';
  $handler->display->display_options['fields']['field_statustype']['table'] = 'field_data_field_statustype';
  $handler->display->display_options['fields']['field_statustype']['field'] = 'field_statustype';
  $handler->display->display_options['fields']['field_statustype']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_statustype']['label'] = '';
  $handler->display->display_options['fields']['field_statustype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_statustype']['element_label_colon'] = FALSE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_statustype';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'Upcoming';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<div class="flex-statustype-upcoming flex-items">Upcoming</div>';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<div class="flex-statustype-past flex-items">Past</div>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_statustype';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[views_conditional]';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'title_1';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '<div class="spotlight-wrapper">
[views_conditional_1]
<h2>[title_2] Recommends</h2>
<div class="spotlight_image" title="[title_1] ">[field_image]</div>
<div class="spotlight_title">[title_1]</div>
<div class="spotlight_date">[views_conditional_5]</div>
<div class="spotlight_location">[field_location]</div>
<div class="spotlight_body">[body]</div>
<div class="spotlight_link">[field_link]</div>
</div>
';
  $handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Experts by Expertise';

  /* Display: Experts A to Z */
  $handler = $view->new_display('page', 'Experts A to Z', 'experts_a_to_z');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'EXPERTS A to Z';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<!--<a href="expert-home">Expert Home</a>-->';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_spotlight_target_id']['id'] = 'field_spotlight_target_id';
  $handler->display->display_options['relationships']['field_spotlight_target_id']['table'] = 'field_data_field_spotlight';
  $handler->display->display_options['relationships']['field_spotlight_target_id']['field'] = 'field_spotlight_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['label'] = '';
  $handler->display->display_options['fields']['field_expert_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_expert_image']['settings'] = array(
    'image_style' => 'homepage_slider_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Area of Expertise */
  $handler->display->display_options['fields']['field_area_of_expertise']['id'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['field'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_area_of_expertise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_of_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_area_of_expertise']['separator'] = ' | ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body_1']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body_1']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="feature-expert-wrapper">
<div class="feature-exp-col expert-img" title="[title_2]">[field_expert_image]</div>
<div class="feature-exp-col expert-info">
<div class="views-field  views-field-title" title="[title_2]">[title]</div>
<div class="views-field  views-field-designation">[field_designation]</div>
<div class="views-field  views-field-body">[body_1]</div>
<div class="views-field  views-field-area-of-expertise">[field_area_of_expertise]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Date Format */
  $handler->display->display_options['fields']['field_date_format_type']['id'] = 'field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['table'] = 'field_data_field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['field'] = 'field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_format_type']['label'] = '';
  $handler->display->display_options['fields']['field_date_format_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_format_type']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_date_format_type';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'Month-Year';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[field_date_1]';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_date_format_type';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'Only Year';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '[field_date_2]';
  $handler->display->display_options['fields']['views_conditional_3']['or'] = '[field_date]';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '[views_conditional_3] ';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = '[views_conditional_2]';
  $handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<a href="http://[field_link]">Read More</a>';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Field: Content: StatusType */
  $handler->display->display_options['fields']['field_statustype']['id'] = 'field_statustype';
  $handler->display->display_options['fields']['field_statustype']['table'] = 'field_data_field_statustype';
  $handler->display->display_options['fields']['field_statustype']['field'] = 'field_statustype';
  $handler->display->display_options['fields']['field_statustype']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_statustype']['label'] = '';
  $handler->display->display_options['fields']['field_statustype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_statustype']['element_label_colon'] = FALSE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_statustype';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'Upcoming';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<div class="flex-statustype-upcoming flex-items">Upcoming</div>';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<div class="flex-statustype-past flex-items">Past</div>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_statustype';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[views_conditional]';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
  $handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_5']['if'] = 'title_1';
  $handler->display->display_options['fields']['views_conditional_5']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_5']['then'] = '<div class="spotlight-wrapper">
[views_conditional_1]
<h2>[title_2] Recommends</h2>
<div class="spotlight_image" title="[title_1] ">[field_image]</div>
<div class="spotlight_title">[title_1]</div>
<div class="spotlight_date">[views_conditional_4]</div>
<div class="spotlight_location">[field_location]</div>
<div class="spotlight_body">[body]</div>
<div class="spotlight_link">[field_link]</div>
</div>';
  $handler->display->display_options['fields']['views_conditional_5']['strip_tags'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'experts';

  /* Display: Expert home block */
  $handler = $view->new_display('block', 'Expert home block', 'expert_home_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Introducing Our Experts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'flexslider_carousel_with_min_and_max_ranges';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['label'] = '';
  $handler->display->display_options['fields']['field_expert_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_expert_image']['settings'] = array(
    'image_style' => 'homepage_slider_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field views-field-field-expert-image">
 <div class="field-content" title="[title_1]">
[field_expert_image]
</div>
</div>
<div class="views-field views-field-title" title="[title_1]">
<span class="field-content">
[title]
</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<div class="home-slider-rm-btn" > &nbsp;>> </div>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Home page bio */
  $handler->display->display_options['fields']['field_home_page_bio']['id'] = 'field_home_page_bio';
  $handler->display->display_options['fields']['field_home_page_bio']['table'] = 'field_data_field_home_page_bio';
  $handler->display->display_options['fields']['field_home_page_bio']['field'] = 'field_home_page_bio';
  $handler->display->display_options['fields']['field_home_page_bio']['label'] = '';
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['text'] = '[field_home_page_bio][view_node] ';
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['alt'] = '>>';
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['max_length'] = '225';
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_home_page_bio']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_home_page_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['Expert_Search'] = $view;

  $view = new view();
  $view->name = 'expertise';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Expertise';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expertise';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'area_of_expertise' => 'area_of_expertise',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<div class="custom-view-header"><div class="custom-box custom-title">Expertise</div><!--<div class="custom-box custom-link-right"><a href="experts"> View experts A to Z</a></div>--></div>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul class="expertise-term-list">
<li><a href="#num">#</a></li>
<li><a href="#A">A</a></li>
<li><a href="#B">B</a></li>
<li><a href="#C">C</a></li>
<li><a href="#D">D</a></li>
<li><a href="#E">E</a></li>
<li><a href="#F">F</a></li>
<li><a href="#G">G</a></li>
<li><a href="#H">H</a></li>
<li><a href="#I">I</a></li>
<li><a href="#J">J</a></li>
<li><a href="#K">K</a></li>
<li><a href="#L">L</a></li>
<li><a href="#M">M</a></li>
<li><a href="#N">N</a></li>
<li><a href="#O">O</a></li>
<li><a href="#P">P</a></li>
<li><a href="#Q">Q</a></li>
<li><a href="#R">R</a></li>
<li><a href="#S">S</a></li>
<li><a href="#T">T</a></li>
<li><a href="#U">U</a></li>
<li><a href="#V">V</a></li>
<li><a href="#W">W</a></li>
<li><a href="#X">X</a></li>
<li><a href="#Y">Y</a></li>
<li><a href="#Z">Z</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Area of Expertise */
  $handler->display->display_options['relationships']['reverse_field_area_of_expertise_node']['id'] = 'reverse_field_area_of_expertise_node';
  $handler->display->display_options['relationships']['reverse_field_area_of_expertise_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_area_of_expertise_node']['field'] = 'reverse_field_area_of_expertise_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_area_of_expertise_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['label'] = '';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '<div>[name]
</div>';
  $handler->display->display_options['fields']['name_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['name_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_2']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name_2']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div title="[name]">[name]
[nid]
</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'expertise';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Area of Expertise */
  $handler->display->display_options['relationships']['reverse_field_area_of_expertise_node']['id'] = 'reverse_field_area_of_expertise_node';
  $handler->display->display_options['relationships']['reverse_field_area_of_expertise_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_area_of_expertise_node']['field'] = 'reverse_field_area_of_expertise_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['name']['summary_options']['separator'] = '-';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $export['expertise'] = $view;

  $view = new view();
  $view->name = 'map_location_experts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map Expert Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ohio';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Area of Expertise */
  $handler->display->display_options['fields']['field_area_of_expertise']['id'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['field'] = 'field_area_of_expertise';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'map_location_experts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_spotlight_target_id']['id'] = 'field_spotlight_target_id';
  $handler->display->display_options['relationships']['field_spotlight_target_id']['table'] = 'field_data_field_spotlight';
  $handler->display->display_options['relationships']['field_spotlight_target_id']['field'] = 'field_spotlight_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Expert image */
  $handler->display->display_options['fields']['field_expert_image']['id'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['table'] = 'field_data_field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['field'] = 'field_expert_image';
  $handler->display->display_options['fields']['field_expert_image']['label'] = '';
  $handler->display->display_options['fields']['field_expert_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_expert_image']['settings'] = array(
    'image_style' => 'homepage_slider_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['link_to_node'] = FALSE;
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_designation']['id'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['table'] = 'field_data_field_designation';
  $handler->display->display_options['fields']['field_designation']['field'] = 'field_designation';
  $handler->display->display_options['fields']['field_designation']['label'] = '';
  $handler->display->display_options['fields']['field_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Area of Expertise */
  $handler->display->display_options['fields']['field_area_of_expertise']['id'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['table'] = 'field_data_field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['field'] = 'field_area_of_expertise';
  $handler->display->display_options['fields']['field_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_area_of_expertise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_of_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_area_of_expertise']['separator'] = ' | ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="feature-expert-wrapper">
<div class="feature-exp-col expert-img" title="[title_3]">[field_expert_image]</div>
<div class="feature-exp-col expert-info">
<div class="views-field  views-field-title" title="[title_3]">[title]</div>
<div class="views-field  views-field-designation">[field_designation]</div>
<div class="views-field  views-field-body">[body]</div>
<div class="views-field  views-field-area-of-expertise">[field_area_of_expertise]</div>
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Date Format */
  $handler->display->display_options['fields']['field_date_format_type']['id'] = 'field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['table'] = 'field_data_field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['field'] = 'field_date_format_type';
  $handler->display->display_options['fields']['field_date_format_type']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_format_type']['label'] = '';
  $handler->display->display_options['fields']['field_date_format_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_format_type']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_date_format_type';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'Month-Year';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '[field_date_1]';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_date_format_type';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_4']['equalto'] = 'Only Year';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '[field_date_2]';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = '[field_date]';
  $handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
  $handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_5']['if'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_5']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional_5']['then'] = '[views_conditional_4]';
  $handler->display->display_options['fields']['views_conditional_5']['or'] = '[views_conditional_3]';
  $handler->display->display_options['fields']['views_conditional_5']['strip_tags'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<a href="http://[field_link]">Read More</a>';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: StatusType */
  $handler->display->display_options['fields']['field_statustype']['id'] = 'field_statustype';
  $handler->display->display_options['fields']['field_statustype']['table'] = 'field_data_field_statustype';
  $handler->display->display_options['fields']['field_statustype']['field'] = 'field_statustype';
  $handler->display->display_options['fields']['field_statustype']['relationship'] = 'field_spotlight_target_id';
  $handler->display->display_options['fields']['field_statustype']['label'] = '';
  $handler->display->display_options['fields']['field_statustype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_statustype']['element_label_colon'] = FALSE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_statustype';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'Upcoming';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '<div class="flex-statustype-upcoming flex-items">Upcoming</div>';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = '<div class="flex-statustype-past flex-items">Past</div>';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_statustype';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[views_conditional_1] ';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'title_1';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<div class="spotlight-wrapper">
[views_conditional_2] 
<h2>[title_2] Recommends</h2>
<div class="spotlight_image" title="[title_1] ">[field_image]</div>
<div class="spotlight_title">[title_1]</div>
<div class="spotlight_date">[views_conditional_5]</div>
<div class="spotlight_location">[field_location]</div>
<div class="spotlight_body">[body_1]</div>
<div class="spotlight_link">[field_link]</div>
</div>
</div>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Location (field_maplocation) */
  $handler->display->display_options['arguments']['field_maplocation_value']['id'] = 'field_maplocation_value';
  $handler->display->display_options['arguments']['field_maplocation_value']['table'] = 'field_data_field_maplocation';
  $handler->display->display_options['arguments']['field_maplocation_value']['field'] = 'field_maplocation_value';
  $handler->display->display_options['arguments']['field_maplocation_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_maplocation_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_maplocation_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_maplocation_value']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_maplocation_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_maplocation_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_maplocation_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_maplocation_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'experts' => 'experts',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'map/%';
  $export['map_location_experts'] = $view;

  return $export;
}
