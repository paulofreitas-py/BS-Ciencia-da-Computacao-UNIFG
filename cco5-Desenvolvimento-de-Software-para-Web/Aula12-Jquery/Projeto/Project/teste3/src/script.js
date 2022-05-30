$(document).ready(function() {
	$('.vid-slider .vid').on('click', function() {
  // get required DOM Elements
  var iframe_src = $(this).children('iframe').attr('src'),
        iframe = $('.video-popup'),
        iframe_video = $('.video-popup iframe'),
        close_btn = $('.close-video');
        iframe_src = iframe_src + '?autoplay=1&rel=0'; // for autoplaying the popup video
        
  // change the video source with the clicked one
  $(iframe_video).attr('src', iframe_src);
  $(iframe).fadeIn().addClass('show-video');
		
  // remove the video overlay when clicking outside the video
  $(document).on('click', function(e) {
    if($(iframe).is(e.target) || $(close_btn).is(e.target)) {
    $(iframe).removeClass('show-video');
    $(iframe_video).attr('src', '');
  }
		});
		
	});
  
});