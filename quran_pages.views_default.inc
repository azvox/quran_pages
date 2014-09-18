<?php
/**
 * @file
 * quran_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function quran_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'quran_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'quran pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Quran pages';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Sii akhri';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'mediaplayer';
  /* Header: Global: MediaFront Player */
  $handler->display->display_options['header']['mediafront_player']['id'] = 'mediafront_player';
  $handler->display->display_options['header']['mediafront_player']['table'] = 'views';
  $handler->display->display_options['header']['mediafront_player']['field'] = 'mediafront_player';
  $handler->display->display_options['header']['mediafront_player']['mediafront_preset'] = 'quran_pages';
  /* Field: Content: quran audio */
  $handler->display->display_options['fields']['field_quran_audio']['id'] = 'field_quran_audio';
  $handler->display->display_options['fields']['field_quran_audio']['table'] = 'field_data_field_quran_audio';
  $handler->display->display_options['fields']['field_quran_audio']['field'] = 'field_quran_audio';
  $handler->display->display_options['fields']['field_quran_audio']['label'] = '';
  $handler->display->display_options['fields']['field_quran_audio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quran_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quran_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_quran_audio']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_quran_audio']['settings'] = array(
    'preset' => 'quran_pages',
  );
  /* Field: Content: quran page image */
  $handler->display->display_options['fields']['field_quran_page_image']['id'] = 'field_quran_page_image';
  $handler->display->display_options['fields']['field_quran_page_image']['table'] = 'field_data_field_quran_page_image';
  $handler->display->display_options['fields']['field_quran_page_image']['field'] = 'field_quran_page_image';
  $handler->display->display_options['fields']['field_quran_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_quran_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quran_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_quran_page_image']['settings'] = array(
    'image_style' => '960x1581',
    'image_link' => 'content',
  );
  /* Field: Content: page No */
  $handler->display->display_options['fields']['field_page_no']['id'] = 'field_page_no';
  $handler->display->display_options['fields']['field_page_no']['table'] = 'field_data_field_page_no';
  $handler->display->display_options['fields']['field_page_no']['field'] = 'field_page_no';
  $handler->display->display_options['fields']['field_page_no']['label'] = '';
  $handler->display->display_options['fields']['field_page_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_no']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
    'quran_pages' => 'quran_pages',
  );
  /* Filter criterion: Content: page No (field_page_no) */
  $handler->display->display_options['filters']['field_page_no_value']['id'] = 'field_page_no_value';
  $handler->display->display_options['filters']['field_page_no_value']['table'] = 'field_data_field_page_no';
  $handler->display->display_options['filters']['field_page_no_value']['field'] = 'field_page_no_value';
  $handler->display->display_options['filters']['field_page_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_page_no_value']['expose']['operator_id'] = 'field_page_no_value_op';
  $handler->display->display_options['filters']['field_page_no_value']['expose']['label'] = 'page No (field_page_no)';
  $handler->display->display_options['filters']['field_page_no_value']['expose']['operator'] = 'field_page_no_value_op';
  $handler->display->display_options['filters']['field_page_no_value']['expose']['identifier'] = 'field_page_no_value';
  $handler->display->display_options['filters']['field_page_no_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_page_no_value']['group_info']['label'] = 'Select Juz form the list';
  $handler->display->display_options['filters']['field_page_no_value']['group_info']['identifier'] = 'field_page_no_value';
  $handler->display->display_options['filters']['field_page_no_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Juz 1',
      'operator' => 'between',
      'value' => array(
        'value' => '21',
        'min' => '1',
        'max' => '21',
      ),
    ),
    2 => array(
      'title' => 'Juz 2',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '22',
        'max' => '41',
      ),
    ),
    3 => array(
      'title' => 'Juz 3',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '42',
        'max' => '62',
      ),
    ),
    4 => array(
      'title' => 'Juz 4',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '62',
        'max' => '81',
      ),
    ),
    5 => array(
      'title' => 'Juz 5',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '82',
        'max' => '101',
      ),
    ),
    6 => array(
      'title' => 'Juz 6',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '102',
        'max' => '121',
      ),
    ),
    7 => array(
      'title' => 'Juz 7',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '121',
        'max' => '141',
      ),
    ),
    8 => array(
      'title' => 'Juz 8',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '142',
        'max' => '161',
      ),
    ),
    9 => array(
      'title' => 'Juz 9',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '162',
        'max' => '181',
      ),
    ),
    10 => array(
      'title' => 'Juz 10',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '182',
        'max' => '201',
      ),
    ),
    11 => array(
      'title' => 'Juz 11',
      'operator' => 'between',
      'value' => array(
        'value' => '201',
        'min' => '201',
        'max' => '221',
      ),
    ),
    12 => array(
      'title' => 'Juz 12',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '222',
        'max' => '241',
      ),
    ),
    13 => array(
      'title' => 'Juz 13',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '242',
        'max' => '261',
      ),
    ),
    14 => array(
      'title' => 'Juz 14',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '262',
        'max' => '281',
      ),
    ),
    15 => array(
      'title' => 'Juz 15',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '282',
        'max' => '301',
      ),
    ),
    16 => array(
      'title' => 'Juz 16',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '302',
        'max' => ' 321',
      ),
    ),
    17 => array(
      'title' => 'Juz 17',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '322',
        'max' => '341',
      ),
    ),
    18 => array(
      'title' => 'Juz 18 ',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '342',
        'max' => '361',
      ),
    ),
    19 => array(
      'title' => 'Juz 19',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '362',
        'max' => '381',
      ),
    ),
    20 => array(
      'title' => 'Juz 20',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '382',
        'max' => '401',
      ),
    ),
    21 => array(
      'title' => 'Juz 27',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '522',
        'max' => '541',
      ),
    ),
    22 => array(
      'title' => 'Juz 28',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '542',
        'max' => '561',
      ),
    ),
    23 => array(
      'title' => 'Juz 26',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '502',
        'max' => '521',
      ),
    ),
    24 => array(
      'title' => 'Juz 21',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '402',
        'max' => '421',
      ),
    ),
    25 => array(
      'title' => 'Juz 29',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '562',
        'max' => '581',
      ),
    ),
    26 => array(
      'title' => 'Juz 22',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '422',
        'max' => '441',
      ),
    ),
    27 => array(
      'title' => 'Juz 23',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '442',
        'max' => '461',
      ),
    ),
    28 => array(
      'title' => 'Juz 24',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '462',
        'max' => '481',
      ),
    ),
    29 => array(
      'title' => 'Juz 30',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '582',
        'max' => '604',
      ),
    ),
    30 => array(
      'title' => 'Juz 25',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '482',
        'max' => '502',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'quran-pages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Quran Page images';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Sii akhri';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'mediaplayer';
  $handler->display->display_options['style_options']['mediafront_preset'] = 'quran_pages';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: quran audio */
  $handler->display->display_options['fields']['field_quran_audio']['id'] = 'field_quran_audio';
  $handler->display->display_options['fields']['field_quran_audio']['table'] = 'field_data_field_quran_audio';
  $handler->display->display_options['fields']['field_quran_audio']['field'] = 'field_quran_audio';
  $handler->display->display_options['fields']['field_quran_audio']['label'] = '';
  $handler->display->display_options['fields']['field_quran_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quran_audio']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_quran_audio']['settings'] = array(
    'preset' => 'quran_pages',
  );
  /* Field: Content: quran page image */
  $handler->display->display_options['fields']['field_quran_page_image']['id'] = 'field_quran_page_image';
  $handler->display->display_options['fields']['field_quran_page_image']['table'] = 'field_data_field_quran_page_image';
  $handler->display->display_options['fields']['field_quran_page_image']['field'] = 'field_quran_page_image';
  $handler->display->display_options['fields']['field_quran_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_quran_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quran_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quran_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_quran_page_image']['settings'] = array(
    'image_style' => '960x1581',
    'image_link' => 'content',
  );
  /* Field: Content: page No */
  $handler->display->display_options['fields']['field_page_no']['id'] = 'field_page_no';
  $handler->display->display_options['fields']['field_page_no']['table'] = 'field_data_field_page_no';
  $handler->display->display_options['fields']['field_page_no']['field'] = 'field_page_no';
  $handler->display->display_options['fields']['field_page_no']['label'] = '';
  $handler->display->display_options['fields']['field_page_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_no']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'Listen Qur\'an';
  $handler->display->display_options['block_caching'] = '8';
  $export['quran_pages'] = $view;

  return $export;
}
