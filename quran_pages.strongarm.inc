<?php
/**
 * @file
 * quran_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function quran_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_quran_pages';
  $strongarm->value = 0;
  $export['comment_anonymous_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_quran_pages';
  $strongarm->value = 0;
  $export['comment_default_mode_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_quran_pages';
  $strongarm->value = '50';
  $export['comment_default_per_page_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_quran_pages';
  $strongarm->value = 0;
  $export['comment_form_location_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_quran_pages';
  $strongarm->value = '0';
  $export['comment_preview_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_quran_pages';
  $strongarm->value = '1';
  $export['comment_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_quran_pages';
  $strongarm->value = 0;
  $export['comment_subject_field_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__quran_pages';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediafront_views_options';
  $strongarm->value = array(
    'quran_pages' => array(
      'field_quran_audio' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_quran_page_image' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'mediafront_player' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
  );
  $export['mediafront_views_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_quran_pages';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_quran_pages';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_quran_pages';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_quran_pages';
  $strongarm->value = '0';
  $export['node_preview_quran_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_quran_pages';
  $strongarm->value = 0;
  $export['node_submitted_quran_pages'] = $strongarm;

  return $export;
}
