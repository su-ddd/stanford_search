<?php

/**
 * @file
 * Admin menus for webauth module
 *
 */

/**
 * Base webauth settings form
 */

function stanford_search_admin_settings($form, &$form_state) {
  $form['stanford_search_engine_id'] = array(
    '#type'  => 'textfield',
    '#title' => 'Google Custom Search Engine ID',
    '#size'  => 80,
    '#maxlength' => 255,
    '#default_value' => variable_get('stanford_search_engine_id',''),
    '#description' => t('The custom search engine&rsquo;s unique ID'), 
  );
  return system_settings_form($form);
}
