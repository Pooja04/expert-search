(function ($) {

  $(document).ready(function () {
    $('#searchbox').keyup(function (e) {
      var searchkey = $(this).val();
      if (jQuery.trim(searchkey).length == 0)
      {
        $("#matches").css("display", "none");
      } else
      {
        $("#matches").css("display", "block");
      }
      $.ajax({
        type: 'POST',
        url: Drupal.settings.basePath + 'autocomplete-data/' + searchkey,
        dataType: 'html',
        success: function (data) {
          var search_data = '';
          var parsed_data = $.parseJSON(data);
          for (var key in parsed_data) {
            search_data += "<a href='" + Drupal.settings.basePath + parsed_data[key].link + "'>" + parsed_data[key].value + "</a>";
          }
          $("#matches").html(search_data);
        }
      });
    });



    $("#matches").on('click', 'a', function () {
      $('#searchbox').val($(this).text());
      $("#matches").hide();
    });
  });
})(jQuery);
