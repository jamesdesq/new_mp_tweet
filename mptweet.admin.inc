<?php

function mptweet_settings() {
  $form['mptweet_tweet_form'] = array(
    '#type' => 'textarea',
    '#title' => t('Tweet'),
    '#required' => TRUE,
    '#default_value' => variable_get('mptweet_tweet_form'),
    '#description' => "Configure your Tweet here.",
    '#size' => 20,
    '#maxlength' => 120,
  );
return system_settings_form($form);
}

function mptweet_api_credentials() { 
  $form['mptweet_api_credentials'] = array(
    '#type' => 'textfield',
    '#title' => t('They Work for You API key'),
    '#required' => TRUE,
    '#default_value' => variable_get('mptweet_api_credentials'),
    '#description' => "Enter your They Work for You API key here.",
    '#maxlength' => 120,
  );

return system_settings_form($form);

} 

