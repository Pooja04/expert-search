<?php

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function expertsearch_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $breadcrumb_separator = theme_get_setting('breadcrumb_separator', 'expertsearch');

  $show_breadcrumb_home = theme_get_setting('breadcrumb_home');
  if (!$show_breadcrumb_home) {
    array_shift($breadcrumb);
  }

  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
    return '<div class="breadcrumb">' . implode(' <span class="breadcrumb-separator">' . $breadcrumb_separator . '</span>', $breadcrumb) . '</div>';
  }
}

function expertsearch_page_alter($page) {

  if (theme_get_setting('responsive_meta', 'expertsearch')):
    $mobileoptimized = array(
        '#type' => 'html_tag',
        '#tag' => 'meta',
        '#attributes' => array(
            'name' => 'MobileOptimized',
            'content' => 'width'
        )
    );

    $handheldfriendly = array(
        '#type' => 'html_tag',
        '#tag' => 'meta',
        '#attributes' => array(
            'name' => 'HandheldFriendly',
            'content' => 'true'
        )
    );

    $viewport = array(
        '#type' => 'html_tag',
        '#tag' => 'meta',
        '#attributes' => array(
            'name' => 'viewport',
            'content' => 'width=device-width, initial-scale=1'
        )
    );

    drupal_add_html_head($mobileoptimized, 'MobileOptimized');
    drupal_add_html_head($handheldfriendly, 'HandheldFriendly');
    drupal_add_html_head($viewport, 'viewport');
  endif;
}

function expertsearch_preprocess_html(&$variables) {

  if (!theme_get_setting('responsive_respond', 'expertsearch')):
    drupal_add_css(path_to_theme() . '/css/basic-layout.css', array('group' => CSS_THEME, 'browsers' => array('IE' => '(lte IE 8)&(!IEMobile)', '!IE' => FALSE), 'preprocess' => FALSE));
  endif;

  drupal_add_css(path_to_theme() . '/css/ie.css', array('group' => CSS_THEME, 'browsers' => array('IE' => '(lte IE 8)&(!IEMobile)', '!IE' => FALSE), 'preprocess' => FALSE));
}

/**
 * Override or insert variables into the html template.
 */
function expertsearch_process_html(&$vars) {
  // Hook into color.module
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Override or insert variables into the page template.
 */
function expertsearch_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

function expertsearch_preprocess_node(&$variables) {
  //if (isset($variables['node']->type)) {
  global $base_url;
  if ($variables['node']->type == "experts") {


    //$variables['classes_array'][] = 'node--' . $variables['type'] . '--' . $variables['view_mode'];
    $variables['classes_array'][] = 'node--' . $variables['type'] . '--' . $variables['view_mode'];
//    $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

    $expert_node_wrapper = entity_metadata_wrapper('node', $variables['node']);


    /**
     *
     * Expert entity values
     */
    /**
     * Expert title and it's link
     */
    $variables['title'] = empty($expert_node_wrapper->title->value()) ? '' : $expert_node_wrapper->title->value();
    $variables['node_path'] = empty($expert_node_wrapper->getIdentifier()) ? '' : $base_url . "/" . drupal_get_path_alias('node/' . $expert_node_wrapper->getIdentifier());

    /**
     * Expert designation
     */
    $variables['designation'] = empty($expert_node_wrapper->field_designation->value()) ? '' : $expert_node_wrapper->field_designation->value();

    //Expert image and it's title
    $variables['expert_image'] = empty($expert_node_wrapper->field_expert_image->value()) ? '' : $expert_node_wrapper->field_expert_image->value()['uri'];
    $variables['expert_image_title'] = empty($expert_node_wrapper->field_expert_image->value()) ? '' : $expert_node_wrapper->field_expert_image->value()['title'];

    /**
     * Expert summary and description
     */
    $body_length = empty($expert_node_wrapper->body->raw()) ? '' : strlen($expert_node_wrapper->body->value->value(array('decode' => TRUE)));
    $variables['small_body'] = 1;
    if (!empty($body_length)) {
      $body = $expert_node_wrapper->body->value->value(array('decode' => TRUE));
      $value = ($body_length > 200) ? strpos($body, ' ', 190) : $body_length;
      $body_value = ($body_length > 200) ? substr($expert_node_wrapper->body->value->value(array('decode' => TRUE)), 0, $value) . "..." : $expert_node_wrapper->body->value->value(array('decode' => TRUE));

      $variables['small_body'] = ($body_length > 200) ? 0 : 1;
    }

    $variables['summary'] = empty($expert_node_wrapper->body->raw()) ? '' : $body_value;
    $variables['body'] = empty($expert_node_wrapper->body->raw()) ? '' : $expert_node_wrapper->body->value->value(array('decode' => TRUE));

    /**
     * Expert tags - Area of expertise
     */
    if (!empty($expert_node_wrapper->field_area_of_expertise)) {
      foreach ($expert_node_wrapper->field_area_of_expertise->getIterator() as $expertise_key => $expertise_val) {
        $variables['area_of_expertise'][$expertise_key]['area_of_expertise_name'] = empty($expertise_val->name->value()) ? '' : $expertise_val->name->value();
        $area_of_expertise_path = empty($base_url . "/" . drupal_get_path_alias('taxonomy/term/' . $expertise_val->value()->tid)) ? '' : $base_url . "/" . drupal_get_path_alias('taxonomy/term/' . $expertise_val->value()->tid);
        $variables['area_of_expertise'][$expertise_key]['area_of_expertise_path'] = empty($area_of_expertise_path) ? '' : $area_of_expertise_path;
      }
    }

    /**
     *
     * Spotlight entity values
     */
    $spotlight_entity = $expert_node_wrapper->field_spotlight->value();
    if (!empty($spotlight_entity)) {
      $spotlight_entity_wrapper = entity_metadata_wrapper('node', $spotlight_entity);

      /**
       * Spotlight entity title and it's path
       */
      $variables['spotlight_title'] = empty($spotlight_entity_wrapper->title->value()) ? '' : $spotlight_entity_wrapper->title->value();
      $variables['spotlight_path'] = empty('node/' . $spotlight_entity_wrapper->getIdentifier()) ? '' : $base_url . "/" . drupal_get_path_alias('node/' . $spotlight_entity_wrapper->getIdentifier());

      /**
       * Spotlight entity date and it's format
       */
      $variables['spotlight_date_format'] = empty($spotlight_entity_wrapper->field_date_format_type->value()) ? '' : $spotlight_entity_wrapper->field_date_format_type->value();

      if (!empty($spotlight_entity_wrapper->field_date->value())) {
        if ($variables['spotlight_date_format'] == 'yyyy') {
          $variables['spotlight_date'] = date('Y', $spotlight_entity_wrapper->field_date->value());
        } else if ($variables['spotlight_date_format'] == 'mm-yyyy') {
          $variables['spotlight_date'] = date('F Y', $spotlight_entity_wrapper->field_date->value());
        } else {
          $variables['spotlight_date'] = date('F j, Y', $spotlight_entity_wrapper->field_date->value());
        }
      }

      /**
       * Spotlight entity location
       */
      $variables['spotlight_location'] = empty($spotlight_entity_wrapper->field_location->value()) ? '' : $spotlight_entity_wrapper->field_location->value();

      /**
       * Spotlight entity summary and description
       */
      $spotlight_body_length = empty($spotlight_entity_wrapper->body->raw()) ? '' : strlen($spotlight_entity_wrapper->body->value->value(array('decode' => TRUE)));
      if (!empty($spotlight_body_length)) {

        $body = $spotlight_entity_wrapper->body->value->value(array('decode' => TRUE));
        $value = ($spotlight_body_length > 100) ? strpos($body, ' ', 90) : 100;
        $spotlight_body_value = ($spotlight_body_length > 100) ? substr($spotlight_entity_wrapper->body->value->value(array('decode' => TRUE)), 0, empty($value) ? 100 : $value) . "..." : $spotlight_entity_wrapper->body->value->value(array('decode' => TRUE));
      }
      $variables['spotlight_body'] = empty($spotlight_entity_wrapper->body->raw()) ? '' : $spotlight_body_value;

      /**
       * Spotlight entity default image
       */
      //      $node = node_load($spotlight_entity_wrapper->getIdentifier());
      //       $default_image = field_view_field('node', $node, 'field_image');
      $default_image = field_view_field('node', $spotlight_entity, 'field_image');

      $variables['spotlight_image'] = empty($spotlight_entity_wrapper->field_image->value()) ?
              $default_image : $spotlight_entity_wrapper->field_image->value()['uri'];

      /**
       * Spotlight entity status type for upcoming and past related tiers
       */
      $variables['spotlight_statustype'] = empty($spotlight_entity_wrapper->field_statustype->value()) ? '' : $spotlight_entity_wrapper->field_statustype->value();
    }

    /**
     *
     * Related tier Field collection
     */
    if (!empty($expert_node_wrapper->field_related_tier->value())) {
      foreach ($expert_node_wrapper->field_related_tier->value() as $related_tier_key => $val) {
        /**
         * Unlimited related tier Field collection
         */
        $related_tier_field_collection_values = $val;
        $related_tier_field_collection_wrapper = entity_metadata_wrapper('field_collection_item', $related_tier_field_collection_values);

        /**
         * Related tier Field collection title
         */
        $variables['tier_field_collection_title'][$related_tier_key] = empty($related_tier_field_collection_wrapper->field_tier_title->value()) ? '' : $related_tier_field_collection_wrapper->field_tier_title->value();

        /**
         * Unlimited related tier Field collection entities
         */
        if (!empty($related_tier_field_collection_wrapper->field_related_tiers->value())) {
          $related_tier_entity = $related_tier_field_collection_wrapper->field_related_tiers->value();

          foreach ($related_tier_entity as $related_tier_entity_key => $related_tier_entity_val) {
            /**
             * Related tier Field collection entity wrapper
             */
            $related_tier_entity_wrapper = entity_metadata_wrapper('node', $related_tier_entity_val);

            /**
             * Related tier Field collection entity title, nid and path
             */
            $variables['related']['tier_entity_nid'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->getIdentifier()) ? '' : $related_tier_entity_wrapper->getIdentifier();
            $variables['related']['tier_entity_title'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->title->value()) ? '' : $related_tier_entity_wrapper->title->value();
            $variables['related']['tier_entity_path'][$related_tier_key][$related_tier_entity_key] = empty($base_url . "/" . drupal_get_path_alias('node/' . $related_tier_entity_wrapper->getIdentifier())) ? '' : $base_url . "/" . drupal_get_path_alias('node/' . $related_tier_entity_wrapper->getIdentifier());

            /**
             * Related tier Field collection entity name field
             */
            $variables['related']['tier_entity_name'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->field_name->value()) ? '' : $related_tier_entity_wrapper->field_name->value();

            /**
             * Related tier Field collection entity summary and description
             */
            $related_tier_body_length = empty($related_tier_entity_wrapper->body->raw()) ? '' : strlen($related_tier_entity_wrapper->body->value->value(array('decode' => TRUE)));
            if (!empty($related_tier_body_length)) {
              $body = $related_tier_entity_wrapper->body->value->value(array('decode' => TRUE));
              $value = ($related_tier_body_length > 100) ? strpos($body, ' ', 90) : 100;

              $related_tier_body_value = ($related_tier_body_length > 100) ? substr($related_tier_entity_wrapper->body->value->value(array('decode' => TRUE)), 0, empty($value) ? 100 : $value) . "..." : $related_tier_entity_wrapper->body->value->value(array('decode' => TRUE));
            }

            $variables['related']['tier_entity_description'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->body->raw()) ? '' : $related_tier_body_value;

            /**
             * Related tier Field collection entity date and format
             */
            $variables['related']['tier_entity_date_format'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->field_date_format_type->value()) ? '' : $related_tier_entity_wrapper->field_date_format_type->value();

            if (!empty($related_tier_entity_wrapper->field_date->value())) {
              if ($variables['related']['tier_entity_date_format'][$related_tier_key][$related_tier_entity_key] == 'yyyy') {
                $variables['related']['tier_entity_date'][$related_tier_key][$related_tier_entity_key] = date('Y', $related_tier_entity_wrapper->field_date->value());
              } else if ($variables['related']['tier_entity_date_format'][$related_tier_key][$related_tier_entity_key] == 'mm-yyyy') {
                $variables['related']['tier_entity_date'][$related_tier_key][$related_tier_entity_key] = date('F Y', $related_tier_entity_wrapper->field_date->value());
              } else {
                $variables['related']['tier_entity_date'][$related_tier_key][$related_tier_entity_key] = date('F j, Y', $related_tier_entity_wrapper->field_date->value());
              }
            }

            /**
             * Related tier Field collection entity link field
             */
            $variables['related']['tier_entity_link'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->field_link->value()) ? '' : $related_tier_entity_wrapper->field_link->value();

            /**
             * Related tier Field collection entity status type for upcoming and past related tiers
             */
            $variables['related']['tier_entity_statustype'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->field_statustype->value()) ? '' : $related_tier_entity_wrapper->field_statustype->value();

            /**
             * Related tier Field collection entity default image
             */
            //$node = node_load($related_tier_entity_wrapper->getIdentifier());
            //print render(field_view_field('node', $node, 'field_image'));
            $default_image = field_view_field('node', $related_tier_entity_val, 'field_image');
            $variables['related']['tier_entity_image'][$related_tier_key][$related_tier_entity_key] = empty($related_tier_entity_wrapper->field_image->value()) ? $default_image : $related_tier_entity_wrapper->field_image->value()['uri'];
          }
        }
      }
    }
  }
}

//function expertsearch_default_field_image_path($field_name) {
//  $field_info = field_info_instance('node', $field_name, 'ct_publications');
//  $fid = $field_info['settings']['default_image'];
//  $image = file_load($fid);
//  return file_create_url($image->uri);
//}

function expertsearch_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {

    unset($form['search_block_form']['#title']);

    $form['search_block_form']['#title_display'] = 'invisible';
    $form_default = t('Search');
    $form['search_block_form']['#default_value'] = $form_default;
    $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search-button.png');

    $form['search_block_form']['#attributes'] = array('onblur' => "if (this.value == '') {this.value = '{$form_default}';}", 'onfocus' => "if (this.value == '{$form_default}') {this.value = '';}");
  }
}

/**
 * Add javascript files for jquery slideshow.
 */
if (theme_get_setting('slideshow_js', 'expertsearch')):

  drupal_add_js(drupal_get_path('theme', 'expertsearch') . '/js/jquery.cycle.all.js');

  //Initialize slideshow using theme settings
  $effect = theme_get_setting('slideshow_effect', 'expertsearch');
  $effect_time = (int) theme_get_setting('slideshow_effect_time', 'expertsearch') * 1000;
  $slideshow_randomize = theme_get_setting('slideshow_randomize', 'expertsearch');
  $slideshow_wrap = theme_get_setting('slideshow_wrap', 'expertsearch');
  $slideshow_pause = theme_get_setting('slideshow_pause', 'expertsearch');

  drupal_add_js('jQuery(document).ready(function($) {

	$(window).load(function() {

		$("#slideshow img").show();
		$("#slideshow").fadeIn("slow");
		$("#slider-controls-wrapper").fadeIn("slow");

		$("#slideshow").cycle({
			fx:    "' . $effect . '",
			speed:  "slow",
			timeout: "' . $effect_time . '",
			random: ' . $slideshow_randomize . ',
			nowrap: ' . $slideshow_wrap . ',
			pause: ' . $slideshow_pause . ',
			pager:  "#slider-navigation",
			pagerAnchorBuilder: function(idx, slide) {
				return "#slider-navigation li:eq(" + (idx) + ") a";
			},
			slideResize: true,
			containerResize: false,
			height: "auto",
			fit: 1,
			before: function(){
				$(this).parent().find(".slider-item.current").removeClass("current");
			},
			after: onAfter
		});
	});

	function onAfter(curr, next, opts, fwd) {
		var $ht = $(this).height();
		$(this).parent().height($ht);
		$(this).addClass("current");
	}

	$(window).load(function() {
		var $ht = $(".slider-item.current").height();
		$("#slideshow").height($ht);
	});

	$(window).resize(function() {
		var $ht = $(".slider-item.current").height();
		$("#slideshow").height($ht);
	});

	});', array('type' => 'inline', 'scope' => 'footer', 'weight' => 5)
  );

endif;
?>