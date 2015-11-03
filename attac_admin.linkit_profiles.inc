<?php
/**
 * @file
 * attac_admin.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function attac_admin_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'default';
  $linkit_profile->admin_title = 'Default';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'ag_seite' => 'ag_seite',
        'gruppe' => 'gruppe',
        'artikel' => 'artikel',
        'page' => 'page',
        'news' => 'news',
        'ort' => 'ort',
        'plenum' => 'plenum',
        'protokoll' => 'protokoll',
        'event_calendar' => 'event_calendar',
        'banner_bild' => 0,
        'partner_logo' => 0,
        'slideshow' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'arbeitsgruppen' => 0,
        'terminart' => 0,
        'protokolltyp' => 0,
        'scald_authors' => 0,
        'scald_tags' => 0,
        'themen' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'target' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    2 => 1,
  );
  $linkit_profile->weight = 0;
  $export['default'] = $linkit_profile;

  return $export;
}
