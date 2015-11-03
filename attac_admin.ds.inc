<?php
/**
 * @file
 * attac_admin.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function attac_admin_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner_logo|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner_logo';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_partner_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|partner_logo|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|plenum|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'plenum';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_termin_wo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|plenum|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|plenum|plenum_startseite';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'plenum';
  $ds_fieldsetting->view_mode = 'plenum_startseite';
  $ds_fieldsetting->settings = array(
    'field_termin_wo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-termin-wo',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|plenum|plenum_startseite'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|protokoll|block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'protokoll';
  $ds_fieldsetting->view_mode = 'block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'p',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'a',
        'class' => 'read-more colorbox-node',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|protokoll|block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|protokoll|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'protokoll';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|protokoll|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|protokoll|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'protokoll';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'more-link',
        'ft' => array(),
      ),
    ),
  );
  $export['node|protokoll|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function attac_admin_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner_logo|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner_logo';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_partner_logo',
        1 => 'field_partner_link',
      ),
    ),
    'fields' => array(
      'field_partner_logo' => 'ds_content',
      'field_partner_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|partner_logo|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner_logo|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner_logo';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_parner_logo',
        2 => 'field_partner_link',
        3 => 'redirect',
        4 => 'path',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_parner_logo' => 'ds_content',
      'field_partner_link' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|partner_logo|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|plenum|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'plenum';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_plenum_wann',
        1 => 'body',
        2 => 'field_ref_protokoll',
        3 => 'field_termin_wo',
      ),
    ),
    'fields' => array(
      'field_plenum_wann' => 'ds_content',
      'body' => 'ds_content',
      'field_ref_protokoll' => 'ds_content',
      'field_termin_wo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|plenum|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|plenum|plenum_startseite';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'plenum';
  $ds_layout->view_mode = 'plenum_startseite';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_teaser_start',
        1 => 'field_plenum_wann',
        2 => 'field_termin_wo',
      ),
    ),
    'fields' => array(
      'field_teaser_start' => 'ds_content',
      'field_plenum_wann' => 'ds_content',
      'field_termin_wo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|plenum|plenum_startseite'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|plenum|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'plenum';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_plenum_wann',
        1 => 'body',
        2 => 'field_ref_protokoll',
      ),
    ),
    'fields' => array(
      'field_plenum_wann' => 'ds_content',
      'body' => 'ds_content',
      'field_ref_protokoll' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|plenum|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|protokoll|block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'protokoll';
  $ds_layout->view_mode = 'block';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|protokoll|block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|protokoll|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'protokoll';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_protokoll_datum',
        2 => 'field_protokoll_tagesordnung',
        3 => 'body',
        4 => 'field_protokoll_pdf',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_protokoll_datum' => 'ds_content',
      'field_protokoll_tagesordnung' => 'ds_content',
      'body' => 'ds_content',
      'field_protokoll_pdf' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|protokoll|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|protokoll|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'protokoll';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_horizontal',
        1 => 'title',
        2 => 'field_protokoll_tagesordnung',
        3 => 'field_protokoll_typ',
        4 => 'body',
        5 => 'field_protokoll_datum',
        6 => 'field_protokoll_anwesende',
        7 => 'og_group_ref',
        8 => 'redirect',
        9 => 'path',
        11 => 'field_protokoll_pdf',
        12 => 'group_inhalt',
        14 => 'group_kategorisierung',
        15 => 'group_dateien',
      ),
      'hidden' => array(
        10 => 'group_content_access',
        13 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_horizontal' => 'ds_content',
      'title' => 'ds_content',
      'field_protokoll_tagesordnung' => 'ds_content',
      'field_protokoll_typ' => 'ds_content',
      'body' => 'ds_content',
      'field_protokoll_datum' => 'ds_content',
      'field_protokoll_anwesende' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      'group_content_access' => 'hidden',
      'field_protokoll_pdf' => 'ds_content',
      'group_inhalt' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'group_kategorisierung' => 'ds_content',
      'group_dateien' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|protokoll|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|protokoll|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'protokoll';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_protokoll_typ',
        2 => 'field_protokoll_datum',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_protokoll_typ' => 'ds_content',
      'field_protokoll_datum' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|protokoll|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function attac_admin_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block';
  $ds_view_mode->label = 'Block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'plenum_startseite';
  $ds_view_mode->label = 'Plenum Startseite';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['plenum_startseite'] = $ds_view_mode;

  return $export;
}
