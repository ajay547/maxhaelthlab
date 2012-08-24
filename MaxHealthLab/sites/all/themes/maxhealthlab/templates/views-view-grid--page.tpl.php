<?php
// $Id: views-view-grid.tpl.php,v 1.3 2008/06/14 17:42:43 merlinofchaos Exp $
/**
* @file views-view-grid.tpl.php
* Default simple view template to display a rows in a grid.
*
* - $rows contains a nested array of rows. Each row contains an array of
*   columns.
*
* @ingroup views_templates
*/
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<table class="views-view-grid">
  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <?php
        $row_class = 'row-' . ($row_number + 1);
        if ($row_number == 0) {
          $row_class .= ' row-first';
        }
        elseif (count($rows) == ($row_number + 1)) {
          $row_class .= ' row-last';
        }
      ?>
      <tr class="<?php print $row_class; ?>">
        <?php foreach ($columns as $column_number => $item): ?>
        <?php if ($item) :?>
          <td class="<?php print 'col-'. ($column_number + 1); ?>">
          <div class="product-div">
            <?php print $item; ?>
		  </div>
          </td>
        <?php endif ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>