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
  $form['stanford_search_engine_results_page'] = array(
  '#type'  => 'textfield',
  '#title' => 'Google Custom Search Results Page',
  '#size'  => 80,
  '#maxlength' => 255,
  '#default_value' => variable_get('stanford_search_engine_results_page',''),
  '#description' => t('The search page path, with preceding slash (e.g. /search) where results should appear'),
);
  return system_settings_form($form);
}
