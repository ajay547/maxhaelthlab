<?php
/**
 * @file views-view-row-node.tpl.php
 * Default simple view template to display a single node.
 *
 * Rather than doing anything with this particular template, it is more
 * efficient to use a variant of the node.tpl.php based upon the view,
 * which will be named node-view-VIEWNAME.tpl.php. This isn't actually
 * a views template, which is why it's not used here, but is a template
 * 'suggestion' given to the node template, and is used exactly
 * the same as any other variant of the node template file, such as
 * node-NODETYPE.tpl.php
 *
 * @ingroup views_templates
 */
?>
<?php foreach($view->result as $result) { ?>
<div class="testimonial">
  <p><?php print $result->node_revisions_body; ?></p>
  <div class="right">
    <strong><?php print $result->node_title; ?></strong>
    <br/>
    <?php print l($result->node_data_field_testimonial_link_field_testimonial_link_title, $result->node_data_field_testimonial_link_field_testimonial_link_url, array('target' => '_blank')); ?>
  </div>
</div>
<?php } ?>
