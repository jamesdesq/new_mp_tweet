<?php
/**
 * @file
 * mptweet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mptweet_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mptweet_node_info() {
  $items = array(
    'mp_details' => array(
      'name' => t('MP Details'),
      'base' => 'node_content',
      'description' => t('This is a content type for storing an MP\'s twitter details'),
      'has_title' => '1',
      'title_label' => t('MP\'s name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
