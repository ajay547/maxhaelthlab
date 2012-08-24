<?php

/**
 * Implementation of hook_views_default_views().
 */
function testimonial_views_default_views() {
  $view = new view;
  $view->name = 'testimonials_page';
  $view->description = '';
  $view->tag = 'testimonials';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'body' => array(
      'label' => '',
      'exclude' => 0,
      'id' => 'body',
      'table' => 'node_revisions',
      'field' => 'body',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_testimonial_link_url' => array(
      'label' => '',
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_testimonial_link_url',
      'table' => 'node_data_field_testimonial_link',
      'field' => 'field_testimonial_link_url',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_testimonial_link_title' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_testimonial_link_title',
      'table' => 'node_data_field_testimonial_link',
      'field' => 'field_testimonial_link_title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'testimonial' => 'testimonial',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('use_pager', '1');
  $handler->override_option('use_more', 0);
  $handler = $view->new_display('page', 'Testimonials List', 'page_1');
  $handler->override_option('path', 'testimonials/list');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'List',
    'weight' => '-10',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Testimonials',
    'weight' => '0',
  ));
  $handler = $view->new_display('block', 'Random Testimonial Block', 'block_1');
  $handler->override_option('fields', array(
    'teaser' => array(
      'label' => '',
      'exclude' => 0,
      'id' => 'teaser',
      'table' => 'node_revisions',
      'field' => 'teaser',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_testimonial_link_url' => array(
      'label' => '',
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_testimonial_link_url',
      'table' => 'node_data_field_testimonial_link',
      'field' => 'field_testimonial_link_url',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'random' => array(
      'id' => 'random',
      'table' => 'views',
      'field' => 'random',
    ),
  ));
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', FALSE);
  $handler->override_option('use_more', 1);
  $handler->override_option('block_description', 'Random Testimonial');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('page', 'Manage Testimonials', 'page_2');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Client Name',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_testimonial_link_url' => array(
      'label' => 'Client Link',
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_testimonial_link_url',
      'table' => 'node_data_field_testimonial_link',
      'field' => 'field_testimonial_link_url',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'edit_node' => array(
      'label' => 'Edit',
      'text' => '',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'delete_node' => array(
      'label' => 'Delete',
      'text' => '',
      'exclude' => 0,
      'id' => 'delete_node',
      'table' => 'node',
      'field' => 'delete_node',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer nodes',
  ));
  $handler->override_option('items_per_page', 25);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'body' => 'body',
      'title' => 'title',
      'field_testimonial_link_url' => 'field_testimonial_link_url',
    ),
    'info' => array(
      'body' => array(
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_testimonial_link_url' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'field_testimonial_link_url',
  ));
  $handler->override_option('path', 'testimonials/manage');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Manage',
    'weight' => '50',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'weight' => 0,
  ));
  $views[$view->name] = $view;

  return $views;
}
