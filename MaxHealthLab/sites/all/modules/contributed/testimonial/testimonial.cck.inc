<?php

function testimonial_cck_export() {
  $content[type] = '$content[type]';
  $content[fields] = '$content[fields]';
  $content[extra] = '$content[extra]';
  return <<< EOF
  $content[type] = array (
    'name' => 'Testimonial',
    'type' => 'testimonial',
    'description' => 'This content type is used to create testimonial entries.  These entries can be sorted through a variety of provided views or you may create your own view.',
    'title_label' => 'Client Name',
    'body_label' => 'Testimonial',
    'min_word_count' => '0',
    'help' => '',
    'node_options' => 
    array (
      'status' => true,
      'promote' => false,
      'sticky' => false,
      'revision' => false,
    ),
    'language_content_type' => '0',
    'i18n_node' => '1',
    'i18nsync_nodeapi' => 
    array (
      'author' => false,
      'status' => false,
      'promote' => false,
      'moderate' => false,
      'sticky' => false,
      'revision' => false,
      'parent' => false,
      'taxonomy' => false,
      'comment' => false,
      'field_testimonial_link' => false,
    ),
    'old_type' => 'testimonial',
    'orig_type' => '',
    'module' => 'node',
    'custom' => '1',
    'modified' => '1',
    'locked' => '0',
    'comment' => '0',
    'comment_default_mode' => '4',
    'comment_default_order' => '1',
    'comment_default_per_page' => '50',
    'comment_controls' => '3',
    'comment_anonymous' => 0,
    'comment_subject_field' => '1',
    'comment_preview' => '1',
    'comment_form_location' => '0',
    );
    $content[fields] = array (
    0 => 
    array (
      'label' => 'Client Link',
      'field_name' => 'field_testimonial_link',
      'type' => 'link',
      'widget_type' => 'link',
      'change' => 'Change basic information',
      'weight' => '-3',
      'description' => '',
      'default_value' => 
      array (
        0 => 
        array (
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => '',
      'default_value_widget' => NULL,
      'group' => false,
      'required' => 1,
      'multiple' => '0',
      'url' => 0,
      'title' => 'required',
      'title_value' => '',
      'enable_tokens' => 0,
      'display' => 
      array (
        'url_cutoff' => '80',
      ),
      'attributes' => 
      array (
        'target' => '_blank',
        'rel' => '',
        'class' => 'testimonial_link',
      ),
      'op' => 'Save field settings',
      'module' => 'link',
      'widget_module' => 'link',
      'columns' => 
      array (
        'url' => 
        array (
          'type' => 'varchar',
          'length' => 255,
          'not null' => false,
          'sortable' => true,
        ),
        'title' => 
        array (
          'type' => 'varchar',
          'length' => 255,
          'not null' => false,
          'sortable' => true,
        ),
        'attributes' => 
        array (
          'type' => 'text',
          'size' => 'medium',
          'not null' => false,
        ),
      ),
      'display_settings' => 
      array (
        'label' => 
        array (
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' => 
        array (
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => 
        array (
          'format' => 'default',
          'exclude' => 0,
        ),
        4 => 
        array (
          'format' => 'default',
          'exclude' => 0,
        ),
        2 => 
        array (
          'format' => 'default',
          'exclude' => 0,
        ),
        3 => 
        array (
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => 
        array (
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
    ),
  );
  $content[extra] = array (
    'title' => '-5',
    'body_field' => '-4',
    'menu' => '-2',
  );
EOF;
}
