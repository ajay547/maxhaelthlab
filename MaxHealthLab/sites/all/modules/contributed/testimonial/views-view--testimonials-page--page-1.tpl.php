<?php
/**
 * @file views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 * - $admin_links: A rendered list of administrative links
 * - $admin_links_raw: A list of administrative links suitable for theme('links')
 *
 * @ingroup views_templates
 */
?>
<div class="view view-<?php print $css_name; ?> view-id-<?php print $name; ?> view-display-id-<?php print $display_id; ?> view-dom-id-<?php print $dom_id; ?>">
  <?php if ($admin_links): ?>
    <div class="views-admin-links views-hide">
      <?php print $admin_links; ?>
    </div>
  <?php endif; ?>
  <?php if ($header): ?>
    <div class="testimonial-view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="testimonial-view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="testimonial-view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>
  
  <?php if ($footer): ?>
    <div class="testimonial-view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

</div> <?php // class view ?>
