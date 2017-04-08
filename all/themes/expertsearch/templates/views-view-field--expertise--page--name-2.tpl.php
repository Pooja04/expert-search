<?php

if (is_numeric($output)) {
  print "<div id = 'num'>#</div>";
} else {
  print "<div id = " . $output . " >" . $output . "</div>";
}
?>
