<?php
/**
 * @file
 * quran_pages.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function quran_pages_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'quran_page_importer';
  $feeds_importer->config = array(
    'name' => 'quran page importer',
    'description' => 'A clone of node importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'quran_pages',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'page_no',
            'target' => 'field_page_no',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'recitation_no',
            'target' => 'field_recitation_no',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'recitation',
            'target' => 'field_quran_audio',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'image_pages',
            'target' => 'field_quran_page_image',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => 0,
        'authorize' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['quran_page_importer'] = $feeds_importer;

  return $export;
}
