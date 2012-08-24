// $Id: hover_preview.js,v 1.1 2010/02/12 00:25:08 rjbrown99 Exp $

/*
 * Hover preview javascript
 *
 * Inspired by http://cssglobe.com/post/1695/easiest-tooltip-and-image-preview-using-jquery
 *   by Alen Grakalic (http://cssglobe.com)
 *
 */

Drupal.behaviors.HoverPreview = function (context) {
  /* CONFIG */
    
    xOffset = 10;
    yOffset = 30;
    
    // these 2 variable determine popup's distance from the cursor
    // you might want to adjust to get the right result
    
  /* END CONFIG */
  $("img.hover-preview").hover(function(e){
    this.t = this.title;
    this.title = "";  
    var c = (this.t != "") ? "<br/>" + this.t : "";
    var preview_link = $('#' + this.id + '-url')[0];
    $("body").append("<p id='hover-preview'><img src='"+ preview_link.href +"' alt='Loading Image Preview' />"+ c +"</p>");                
    $("#hover-preview")
      .css("top",(e.pageY - xOffset) + "px")
      .css("left",(e.pageX + yOffset) + "px")
      .fadeIn("fast");            
    },
  function(){
    this.title = this.t;  
    $("#hover-preview").remove();
    }); 
  $("img.hover-preview").mousemove(function(e){
    $("#hover-preview")
      .css("top",(e.pageY - xOffset) + "px")
      .css("left",(e.pageX + yOffset) + "px");
  });     
};
