<?php
/**
 * @file
 * Custom template used on home page map.
 */
?>
<script type="text/javascript">
  var location_array = 0;
  location_array = <?php echo json_encode($locations); ?>;</script>


<div id="map_container"></div>


<script>
  var continent_array = new Array();
  var i = 0;
  var map = new FlaMap(map_cfg);
  map.draw("map_container");
  if (location_array.length != 0) {
    for (var k in location_array) {
      stateId = location_array[k];
      map.setStateAttr(stateId, 'color', '#ba8e2d');
      map.setStateAttr(stateId, 'color2', '#F2BB3C');
      map.setStateAttr(stateId, 'color3', '#7C582C');
      urlString = "map/" + stateId;
      map.setStateAttr(stateId, 'url', urlString);
      continent_array[++i] = stateId.substr(0, 2);

    }
    continent_array = continent_array.filter(function (value, index, self) {
      return self.indexOf(value) === index;
    });
    for (var k in continent_array) {
      map.setStateAttr(continent_array[k], 'color2', '#ba8e2d');
    }
  }

  map.reloadMap();

</script>

