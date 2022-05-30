$(document).ready(function() {
	$('.vid-slider .vid').on('click', function() {
  // MAGIA SENDO EXECUTADA ( NÃO MEXA PORRA)
  var iframe_src = $(this).children('iframe').attr('src'),
        iframe = $('.video-popup'),
        iframe_video = $('.video-popup iframe'),
        close_btn = $('.close-video');
        iframe_src = iframe_src + '?autoplay=1&rel=0'; // reproduzir automaticamente o vídeo pop-up
        
  // mude a fonte de vídeo com a clicada
  $(iframe_video).attr('src', iframe_src);
  $(iframe).fadeIn().addClass('show-video');
		
  // remova a sobreposição de vídeo ao clicar fora do vídeo
  $(document).on('click', function(e) {
    if($(iframe).is(e.target) || $(close_btn).is(e.target)) {
    $(iframe).removeClass('show-video');
    $(iframe_video).attr('src', '');
  }
		});
		
	});
  
});