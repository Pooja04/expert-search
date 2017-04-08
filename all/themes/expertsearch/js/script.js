(function ($) {
  $(document).ready(function () {

    // Carousel with dynamic min/max ranges
    // store the slider in a local variable
    var $window = $(window),
            flexslider = {vars: {}};

    // tiny helper function to add breakpoints
    function getGridSize() {
      return (window.innerWidth < 981) ? 1 : 2;
    }

    $window.load(function () {

      $('.flexslider').flexslider({
        animation: "slide",
        animationLoop: true,
        itemWidth: 200,
        itemMargin: 15,
        controlNav: false,
        minItems: getGridSize(), // use function to pull in initial value
        maxItems: getGridSize(), // use function to pull in initial value
        start: function (slider) {
          flexslider = slider;
        }
      });
    });

    // check grid size on resize event
    $window.resize(function () {
      //$(".front .flexslider ul.slides").width('100%');
      var gridSize = getGridSize();
      flexslider.vars.minItems = gridSize;
      flexslider.vars.maxItems = gridSize;
    });

  });

//flexslider code end here//


  $(document).ready(function () {

    //--SOF left side sticky bar first link target scroll--//

    $('.row1 a.icon-anchor').click(function (event) {
      event.preventDefault();
      $('#block-custom-search-search-block').scrollView();
    });

    $.fn.scrollView = function () {
      return this.each(function () {
        var offsetheight = 10;
        $('html, body').animate({
          scrollTop: $(this).offset().top - offsetheight
        }, 1000);
      });
    };

    //--EOF left side sticky bar first link target scroll--//

    //--SOF stick individual expert page taxonomy field to the right when less info--//

    $('.area-of-expertise-taxo').css("margin-left", "36%");

    $('.bot_links a.read-more').click(function () {
      $('.area-of-expertise-taxo').css("margin-left", "0px");
    });

    $('.bot_links a.close').click(function () {
      $('.area-of-expertise-taxo').css("margin-left", "36%");
    });

    //--EOF stick individual expert page taxonomy field to the right when less info--//

    $('#srch a').click(function () {
      $('.right-container li').fadeOut();
      var attribute_value = $(this).attr('class');
      $('#' + attribute_value).fadeIn();
    });
    //--To hide spotlight block if its child elements are empty on experts atoz page--//

    $('div.view-display-id-experts_a_to_z .spotlight-wrapper').each(function () {
      var $main = $(this),
              $allChildren = $main.children();
      $allEmptyChildren = $allChildren.filter(':empty');
      $main.toggle($allChildren.length !== $allEmptyChildren.length);
    });
    //--To hide spotlight block if its child elements are empty on experts atoz page--//

    // $('div.node-experts node--experts--full .flexslider .flex-link a:empty').hide();

    if (($('.expert-summary').text().length) === 9)
    {
      $('a.read-more').hide();
    }
    //--Toggle summary-body for individual expert page--//
    $('.expert-descr').hide();
    $('.expert-details-wrapper .bot_links a.read-more').click(function () {
      $('.expert-summary').slideUp();
      $('.expert-descr').slideDown();
    });

    $('.expert-details-wrapper .bot_links a.close').click(function () {
      $('.expert-summary').slideDown();
      $('.expert-descr').slideUp();
    });
    //--Toggle summary-body for individual expert page--//


  });


  //for custom scroll for searchbox
  $(document).ready(function () {
    $('.scrollbox').enscroll();
    //--SOF jquery for expertise top alphabets nav---//
    function checkWidth() {
      var windowSize = $(window).width();

      if (windowSize <= 351) {
        arrangeGlossary(95, 275);
      } else if (windowSize <= 479) {
        arrangeGlossary(90, 220);
      } else if (windowSize <= 680) {
        arrangeGlossary(80, 200);
      } else if (windowSize >= 681) {
        arrangeGlossary(75, 150);
      }
    }

    // Execute on load
    checkWidth();
    // Bind event listener
    $(window).resize(checkWidth);


    //--EOF jquery for expertise top alphabets nav---//
  });

  // ===SOF conditional jquery code===//

  function arrangeGlossary(fixHeight, absHeight)
  {
    $('ul.expertise-term-list li a').click(function (e) {
      e.preventDefault();
      $('ul.expertise-term-list li a.active').removeClass('active');
      $(this).addClass('active');
      var selGlossaryItem = $(this).attr('href');

      var adjustHeight = absHeight;

      if ($('.expertise-term-list').css("position") === 'fixed')
      {
        adjustHeight = fixHeight;
      }
      $('html, body').animate({
        scrollTop: $(selGlossaryItem).parents("div.item-list").offset().top - adjustHeight
      }, 1000);

    });
  }

// ===EOF conditional jquery code===//


  $(window).scroll(function () {
    var scroll = $(window).scrollTop();
    if (scroll >= 380) {
      $('.expertise-term-list').addClass('expertise-fix-header');
    } else {
      $('.expertise-term-list').removeClass('expertise-fix-header');
    }
  });
})(jQuery);




