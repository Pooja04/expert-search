
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted"><?php print $submitted ?></div>
  <?php endif; ?>


  <!--node details-->
  <div class="main-wrapper">
    <div class="expert-details-wrapper">

      <!--node image-->
      <div class="image"><img src ="<?php print image_style_url('homepage_slider_image', $expert_image); ?>" title="<?php empty($expert_image_title) ? print $title : print $expert_image_title; ?>"/></div>

      <!--node title-->
      <div class="expert-title"><a href='<?php $node_path ?>'title='<?php print $title; ?>'><?php print $title; ?>  </a></div>

      <!--node designation-->
      <div class="designation"><?php print $designation; ?></div>

      <!--node summary and description-->
      <div class="expert-summary"><?php print $summary; ?><?php ($small_body == 1) ? '' : print '<div class="bot_links"><a class="read-more">Read more</a></div>'; ?></div>
      <div class="expert-descr"><?php print $body; ?><div class="bot_links"><a class="close">Close</a></div></div>

      <!--node taxonomy terms - area of expertise-->
      <?php
      if (!empty($area_of_expertise)) {
        $array_count = count($area_of_expertise);
        $count_check = 1;
        $separater = "";
        ?>
        <div class="area-of-expertise-taxo">
          <?php
          foreach ($area_of_expertise as $expertise_key => $expertise_val) {
            if ($count_check < $array_count) {
              $separater = " | ";
            }
            print "<a href='" . $area_of_expertise[$expertise_key]['area_of_expertise_path'] . "' title = '" . $area_of_expertise[$expertise_key]['area_of_expertise_name'] . "'>" . $area_of_expertise[$expertise_key]['area_of_expertise_name'] . "</a>" . $separater;
            $count_check++;
            $separater = "";
          }
          ?>
        </div>
      <?php } ?>

    </div>


    <!--Spotlight entity details-->
    <div class="spotlight-wrapper">

      <!--Spotlight entity title-->
      <?php
      if (!empty($spotlight_title)) {
        ?>
        <h2><?php empty($title) ? '' : print $title; ?> Recommends </h2>

        <!--Spotlight entity image-->
        <div class="spotlight_image">
          <img src ="
          <?php
          if (!empty($spotlight_image)) {
            ?>
            <?php print image_style_url('medium', $spotlight_image) ?>
            <?php
          } else {
            ?>
            <?php print render($spotlight_image); ?>
            <?php
          }
          ?>
               " title="<?php print render($spotlight_title); ?>"/>
        </div>

        <!--Spotlight entity status type for upcoming and past related tier-->
        <?php
        if (!empty($spotlight_statustype)) {
          if ($spotlight_statustype == 'Upcoming') {
            ?>
            <div class="flex-statustype-upcoming flex-items">Upcoming</div>
            <?php
          } else {
            ?>
            <div class="flex-statustype-past flex-items">Past</div>
            <?php
          }
        }
        ?>
        <div class="spotlight_title"><?php empty($spotlight_title) ? '' : print $spotlight_title; ?></div>
        <div class="spotlight_date"><?php empty($spotlight_date) ? '' : print $spotlight_date; ?></div>
        <div class="spotlight_location"><?php empty($spotlight_location) ? '' : print $spotlight_location; ?></div>
        <div class="spotlight_body"><?php empty($spotlight_body) ? '' : print $spotlight_body; ?></div>

      <?php }
      ?>
    </div>
  </div>

  <!--Related tier field collection details-->
  <?php
  if (!empty($tier_field_collection_title)) {
    foreach ($tier_field_collection_title as $tier_key => $tier_value) {
      if (!empty($related['tier_entity_nid'][$tier_key])) {
        ?>
        <!--Related tier field collection title-->
        <div><h3> <?php
            empty($tier_value) ? print 'Recommended Resources' : print $tier_value;
            ?> </h3> </div>
        <div class="flexslider">
          <ul class="slides">
            <?php
            foreach ($related['tier_entity_nid'][$tier_key] as $tier_entity_nid_key => $tier_entity_nid_value) {
              ?>
              <li>
                <!--For image-->
                <div class="flex-image flex-items">
                  <?php $img = $related['tier_entity_image'][$tier_key][$tier_entity_nid_key]; ?>
                  <img src ="
                  <?php
                  if (!empty($img)) {
                    ?>
                    <?php print image_style_url('medium', $img); ?>
                    <?php
                  } else {
                    ?>
                    <?php print render($img); ?>
                    <?php
                  }
                  ?>
                       " title="<?php print $related['tier_entity_title'][$tier_key][$tier_entity_nid_key]; ?>"/>
                </div>
                <!--For Title-->
                <div class="flex-title flex-items">
                  <?php
                  print $related['tier_entity_title'][$tier_key][$tier_entity_nid_key];
                  ?>

                </div>

                <!--For status type for upcoming and past related tier-->
                <?php
                if (!empty($related['tier_entity_statustype'][$tier_key][$tier_entity_nid_key])) {
                  if ($related['tier_entity_statustype'][$tier_key][$tier_entity_nid_key] == 'Upcoming') {
                    ?>
                    <div class="flex-statustype-upcoming flex-items">Upcoming</div>
                    <?php
                  } else {
                    ?>
                    <div class="flex-statustype-past flex-items">Past</div>
                    <?php
                  }
                }
                ?>

                <!--For date-->
                <div class="flex-date flex-items">
                  <?php empty($related['tier_entity_date'][$tier_key][$tier_entity_nid_key]) ? '' : print $related['tier_entity_date'][$tier_key][$tier_entity_nid_key]; ?>
                </div>

                <!--For description-->
                <div class="flex-body flex-items">
                  <?php empty($related['tier_entity_description'][$tier_key][$tier_entity_nid_key]) ? '' : print $related['tier_entity_description'][$tier_key][$tier_entity_nid_key]; ?>
                </div>

                <!--For link-->
                <?php if (!empty($related['tier_entity_link'][$tier_key][$tier_entity_nid_key])) { ?>
                  <div class="flex-link flex-items"><!--For link-->
                    <a href="http://<?php empty($related['tier_entity_link'][$tier_key][$tier_entity_nid_key]) ? '' : print $related['tier_entity_link'][$tier_key][$tier_entity_nid_key]; ?>">Read more
                    </a>
                  </div>
                <?php } ?>

              </li>

              <?php
            }
            ?>
          </ul>
        </div>
        <?php
      }
    }
  }
  ?>


  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <div class="links"><?php print render($content['links']); ?></div>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>

</div>