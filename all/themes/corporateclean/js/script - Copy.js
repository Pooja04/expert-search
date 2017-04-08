(function ($) {

  $(document).ready(function () {
    debugger;
    $('#hide').hide();
    $('#show').html($("#search_detail").html());
    $('#srch a').click(function () {
      debugger;
      $('#srch a').removeAttr("id");
      var attribute_value = $(this).attr('class');
      $(this).attr("id", "active");
      var values = $("#" + attribute_value).html();
      $('#show').html(values);
    });
  });

})(jQuery);




