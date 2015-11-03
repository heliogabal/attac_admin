<?php
/**
 * @file
 * attac_admin.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function attac_admin_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dateien|node|protokoll|form';
  $field_group->group_name = 'group_dateien';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'protokoll';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Dateien',
    'weight' => '15',
    'children' => array(
      0 => 'field_protokoll_pdf',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dateien field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_dateien|node|protokoll|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|protokoll|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'protokoll';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tab',
    'weight' => '0',
    'children' => array(
      0 => 'group_inhalt',
      1 => 'group_kategorisierung',
      2 => 'group_dateien',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|protokoll|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inhalt|node|protokoll|form';
  $field_group->group_name = 'group_inhalt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'protokoll';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_protokoll_tagesordnung',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inhalt field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_inhalt|node|protokoll|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kategorisierung|node|protokoll|form';
  $field_group->group_name = 'group_kategorisierung';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'protokoll';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Kategorisierung',
    'weight' => '14',
    'children' => array(
      0 => 'field_protokoll_datum',
      1 => 'field_protokoll_anwesende',
      2 => 'field_protokoll_typ',
      3 => 'og_group_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-kategorisierung field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_kategorisierung|node|protokoll|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|plenum|plenum_startseite';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plenum';
  $field_group->mode = 'plenum_startseite';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'entity',
        'custom_url' => '',
        'custom_url_normalize' => 1,
        'target' => 'default',
        'classes' => 'group-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link|node|plenum|plenum_startseite'] = $field_group;

  return $export;
}
