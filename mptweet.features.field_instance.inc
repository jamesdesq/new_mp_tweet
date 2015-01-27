<?php
/**
 * @file
 * mptweet.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mptweet_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-mp_details-field_twitter_handle'
  $field_instances['node-mp_details-field_twitter_handle'] = array(
    'bundle' => 'mp_details',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_twitter_handle',
    'label' => 'Twitter handle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Twitter handle');

  return $field_instances;
}
