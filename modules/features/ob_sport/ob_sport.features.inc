<?php
/**
 * @file
 * ob_sport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ob_sport_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ob_sport_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ob_sport_node_info() {
  $items = array(
    'sport' => array(
      'name' => t('Sport'),
      'base' => 'node_content',
      'description' => t('This adds a new <em>Sport/</em> content type to describe and define a sport that is played at the club'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
