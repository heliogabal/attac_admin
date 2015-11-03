<?php
/**
 * @file
 * attac_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function attac_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'banner';
  $view->description = '';
  $view->tag = 'default, attac';
  $view->base_table = 'node';
  $view->human_name = 'Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Banner Oben';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_banner_link']['id'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['table'] = 'field_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['field'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_link']['type'] = 'link_plain';
  /* Field: Content: Bannerbild */
  $handler->display->display_options['fields']['field_bannerbild']['id'] = 'field_bannerbild';
  $handler->display->display_options['fields']['field_bannerbild']['table'] = 'field_data_field_bannerbild';
  $handler->display->display_options['fields']['field_bannerbild']['field'] = 'field_bannerbild';
  $handler->display->display_options['fields']['field_bannerbild']['label'] = '';
  $handler->display->display_options['fields']['field_bannerbild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bannerbild']['alter']['text'] = '<a href="[field_banner_link]">[field_bannerbild]</a>';
  $handler->display->display_options['fields']['field_bannerbild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bannerbild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bannerbild']['type'] = 'image';
  $handler->display->display_options['fields']['field_bannerbild']['settings'] = array(
    'image_style' => 'full_banner',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner_bild' => 'banner_bild',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['banner'] = array(
    t('Master'),
    t('Banner Oben'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_banner_link]">[field_bannerbild]</a>'),
    t('Block'),
  );
  $export['banner'] = $view;

  $view = new view();
  $view->name = 'partner_logos';
  $view->description = '';
  $view->tag = 'default, attac';
  $view->base_table = 'node';
  $view->human_name = 'Partner-Logos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partner-Logos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_partner_link']['id'] = 'field_partner_link';
  $handler->display->display_options['fields']['field_partner_link']['table'] = 'field_data_field_partner_link';
  $handler->display->display_options['fields']['field_partner_link']['field'] = 'field_partner_link';
  $handler->display->display_options['fields']['field_partner_link']['label'] = '';
  $handler->display->display_options['fields']['field_partner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partner_link']['type'] = 'link_absolute';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_parner_logo']['id'] = 'field_parner_logo';
  $handler->display->display_options['fields']['field_parner_logo']['table'] = 'field_data_field_parner_logo';
  $handler->display->display_options['fields']['field_parner_logo']['field'] = 'field_parner_logo';
  $handler->display->display_options['fields']['field_parner_logo']['label'] = '';
  $handler->display->display_options['fields']['field_parner_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_parner_logo']['alter']['path'] = '[field_partner_link]';
  $handler->display->display_options['fields']['field_parner_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parner_logo']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_parner_logo']['type'] = 'full';
  $handler->display->display_options['fields']['field_parner_logo']['settings'] = array(
    'link' => '0',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partner_logo' => 'partner_logo',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['partner_logos'] = array(
    t('Master'),
    t('Partner-Logos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['partner_logos'] = $view;

  $view = new view();
  $view->name = 'plenum';
  $view->description = '';
  $view->tag = 'default, attac';
  $view->base_table = 'node';
  $view->human_name = 'Plenum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nächstes Plenum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plenum' => 'plenum',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mitmachen/plenum';

  /* Display: Nächstes Plenum Startseite */
  $handler = $view->new_display('block', 'Nächstes Plenum Startseite', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gruppentreffen (Plenum)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'inner';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'plenum_startseite';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/ueber-attacberlin/attacberlin-gruppentreffen-plenum" class="flat">weiterlesen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plenum' => 'plenum',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now +32 days';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_plenum_wann.field_plenum_wann_value' => 'field_data_field_plenum_wann.field_plenum_wann_value',
  );

  /* Display: Nächstes Plenum Plenumsseite */
  $handler = $view->new_display('block', 'Nächstes Plenum Plenumsseite', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plenum' => 'plenum',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now +32 days';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_plenum_wann.field_plenum_wann_value' => 'field_data_field_plenum_wann.field_plenum_wann_value',
  );
  $handler->display->display_options['block_description'] = 'Nächstes Plenum';
  $translatables['plenum'] = array(
    t('Master'),
    t('Nächstes Plenum'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('Nächstes Plenum Startseite'),
    t('Gruppentreffen (Plenum)'),
    t('<a href="/ueber-attacberlin/attacberlin-gruppentreffen-plenum" class="flat">weiterlesen</a>'),
    t('Nächstes Plenum Plenumsseite'),
  );
  $export['plenum'] = $view;

  $view = new view();
  $view->name = 'protokolle';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Protokolle';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Protokolle';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_protokoll_datum_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_protokoll_typ_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Wählen Sie eine beliebige Filter und klicken Sie auf Anwenden, um Ergebnisse zu sehen';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Datum der Sitzung */
  $handler->display->display_options['fields']['field_protokoll_datum']['id'] = 'field_protokoll_datum';
  $handler->display->display_options['fields']['field_protokoll_datum']['table'] = 'field_data_field_protokoll_datum';
  $handler->display->display_options['fields']['field_protokoll_datum']['field'] = 'field_protokoll_datum';
  $handler->display->display_options['fields']['field_protokoll_datum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_protokoll_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Tagesordnung */
  $handler->display->display_options['fields']['field_protokoll_tagesordnung']['id'] = 'field_protokoll_tagesordnung';
  $handler->display->display_options['fields']['field_protokoll_tagesordnung']['table'] = 'field_data_field_protokoll_tagesordnung';
  $handler->display->display_options['fields']['field_protokoll_tagesordnung']['field'] = 'field_protokoll_tagesordnung';
  $handler->display->display_options['fields']['field_protokoll_tagesordnung']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: PDF Protokoll */
  $handler->display->display_options['fields']['field_protokoll_pdf']['id'] = 'field_protokoll_pdf';
  $handler->display->display_options['fields']['field_protokoll_pdf']['table'] = 'field_data_field_protokoll_pdf';
  $handler->display->display_options['fields']['field_protokoll_pdf']['field'] = 'field_protokoll_pdf';
  $handler->display->display_options['fields']['field_protokoll_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_protokoll_pdf']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_protokoll_pdf']['type'] = 'file_representation';
  $handler->display->display_options['fields']['field_protokoll_pdf']['settings'] = array(
    'link' => '1',
  );
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['colorbox']['alter']['text'] = '<div class="inner">[colorbox]</div>';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<h2>[title]</h2>
<p>[field_protokoll_datum]</p>
[field_protokoll_tagesordnung]
[body] 
<p>[field_protokoll_pdf]</p>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 0;
  $handler->display->display_options['fields']['colorbox']['width'] = '800px';
  $handler->display->display_options['fields']['colorbox']['height'] = '90%';
  /* Sort criterion: Content: Datum der Sitzung (field_protokoll_datum) */
  $handler->display->display_options['sorts']['field_protokoll_datum_value']['id'] = 'field_protokoll_datum_value';
  $handler->display->display_options['sorts']['field_protokoll_datum_value']['table'] = 'field_data_field_protokoll_datum';
  $handler->display->display_options['sorts']['field_protokoll_datum_value']['field'] = 'field_protokoll_datum_value';
  $handler->display->display_options['sorts']['field_protokoll_datum_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'protokoll' => 'protokoll',
  );
  /* Filter criterion: Content: Typ (field_protokoll_typ) */
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['id'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['table'] = 'field_data_field_protokoll_typ';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['field'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['vocabulary'] = 'protokolltyp';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Einleitung Protokolle';
  $handler->display->display_options['header']['area']['content'] = '<p>Hier können Sie in allen vorhandenen Protokollen der verschiedenen Treffen innerhalb attac Berlins stöbern, um sich über unsere Beschlüsse und Diskussionen ein Bild zu machen, auch wenn Sie an einem Termin nicht teilnehmen konnten. </p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Datum der Sitzung */
  $handler->display->display_options['fields']['field_protokoll_datum']['id'] = 'field_protokoll_datum';
  $handler->display->display_options['fields']['field_protokoll_datum']['table'] = 'field_data_field_protokoll_datum';
  $handler->display->display_options['fields']['field_protokoll_datum']['field'] = 'field_protokoll_datum';
  $handler->display->display_options['fields']['field_protokoll_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: PDF Protokoll */
  $handler->display->display_options['fields']['field_protokoll_pdf']['id'] = 'field_protokoll_pdf';
  $handler->display->display_options['fields']['field_protokoll_pdf']['table'] = 'field_data_field_protokoll_pdf';
  $handler->display->display_options['fields']['field_protokoll_pdf']['field'] = 'field_protokoll_pdf';
  $handler->display->display_options['fields']['field_protokoll_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_protokoll_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protokoll_pdf']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_protokoll_pdf']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_protokoll_pdf']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_protokoll_pdf']['type'] = 'file_representation';
  $handler->display->display_options['fields']['field_protokoll_pdf']['settings'] = array(
    'link' => '1',
  );
  /* Field: Content: Typ */
  $handler->display->display_options['fields']['field_protokoll_typ']['id'] = 'field_protokoll_typ';
  $handler->display->display_options['fields']['field_protokoll_typ']['table'] = 'field_data_field_protokoll_typ';
  $handler->display->display_options['fields']['field_protokoll_typ']['field'] = 'field_protokoll_typ';
  $handler->display->display_options['fields']['field_protokoll_typ']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: AG */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'WEITERLESEN';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'protokoll' => 'protokoll',
  );
  /* Filter criterion: Content: Datum der Sitzung (field_protokoll_datum) */
  $handler->display->display_options['filters']['field_protokoll_datum_value']['id'] = 'field_protokoll_datum_value';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['table'] = 'field_data_field_protokoll_datum';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['field'] = 'field_protokoll_datum_value';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_protokoll_datum_value']['expose']['operator_id'] = 'field_protokoll_datum_value_op';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['expose']['label'] = 'Jahr';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['expose']['operator'] = 'field_protokoll_datum_value_op';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['expose']['identifier'] = 'field_protokoll_datum_value';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_protokoll_datum_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_protokoll_datum_value']['year_range'] = '-5:+0';
  /* Filter criterion: Content: Typ (field_protokoll_typ) */
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['id'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['table'] = 'field_data_field_protokoll_typ';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['field'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['expose']['operator_id'] = 'field_protokoll_typ_tid_op';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['expose']['operator'] = 'field_protokoll_typ_tid_op';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['expose']['identifier'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['vocabulary'] = 'protokolltyp';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'informieren/protokolle';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Protokolle';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block VG-Protokolle */
  $handler = $view->new_display('block', 'Block VG-Protokolle', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ALLE PROTOKOLLE';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['block_description'] = 'Letztes Protokoll';

  /* Display: Block Plenum-Protokolle */
  $handler = $view->new_display('block', 'Block Plenum-Protokolle', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ALLE PROTOKOLLE';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'protokoll' => 'protokoll',
  );
  /* Filter criterion: Content: Typ (field_protokoll_typ) */
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['id'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['table'] = 'field_data_field_protokoll_typ';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['field'] = 'field_protokoll_typ_tid';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_protokoll_typ_tid']['vocabulary'] = 'protokolltyp';
  $handler->display->display_options['block_description'] = 'Letztes Protokoll';
  $translatables['protokolle'] = array(
    t('Master'),
    t('Protokolle'),
    t('more'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Erweiterte Optionen'),
    t('Wählen Sie eine beliebige Filter und klicken Sie auf Anwenden, um Ergebnisse zu sehen'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Datum der Sitzung'),
    t('Tagesordnung'),
    t('PDF Protokoll'),
    t('<div class="inner">[colorbox]</div>'),
    t('Page'),
    t('Einleitung Protokolle'),
    t('<p>Hier können Sie in allen vorhandenen Protokollen der verschiedenen Treffen innerhalb attac Berlins stöbern, um sich über unsere Beschlüsse und Diskussionen ein Bild zu machen, auch wenn Sie an einem Termin nicht teilnehmen konnten. </p>'),
    t('Typ'),
    t('WEITERLESEN'),
    t('Jahr'),
    t('Block VG-Protokolle'),
    t('ALLE PROTOKOLLE'),
    t('Letztes Protokoll'),
    t('Block Plenum-Protokolle'),
  );
  $export['protokolle'] = $view;

  $view = new view();
  $view->name = 'reference_dialogue_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reference Dialogue Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reference Dialogue Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Adresse - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_adresse_thoroughfare']['id'] = 'field_adresse_thoroughfare';
  $handler->display->display_options['fields']['field_adresse_thoroughfare']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse_thoroughfare']['field'] = 'field_adresse_thoroughfare';
  $handler->display->display_options['fields']['field_adresse_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Content: Adresse - Postal code */
  $handler->display->display_options['fields']['field_adresse_postal_code']['id'] = 'field_adresse_postal_code';
  $handler->display->display_options['fields']['field_adresse_postal_code']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse_postal_code']['field'] = 'field_adresse_postal_code';
  $handler->display->display_options['fields']['field_adresse_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_postal_code']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ort' => 'ort',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_termin_wo:termin',
  );
  $translatables['reference_dialogue_search'] = array(
    t('Master'),
    t('Reference Dialogue Search'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Titel'),
    t('Reference dialog Search'),
  );
  $export['reference_dialogue_search'] = $view;

  $view = new view();
  $view->name = 'suche';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Suche';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Suche';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suchen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'title' => 'title',
  );

  /* Display: Suche */
  $handler = $view->new_display('page', 'Suche', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'suche';
  $translatables['suche'] = array(
    t('Master'),
    t('Suche'),
    t('more'),
    t('Suchen'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('.'),
    t(','),
  );
  $export['suche'] = $view;

  return $export;
}
