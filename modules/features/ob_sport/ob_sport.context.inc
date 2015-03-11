<?php
/**
 * @file
 * ob_sport.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ob_sport_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sports_menu_sub_links';
  $context->description = 'Reactions when viewing the sport page';
  $context->tag = 'sport';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sports' => 'sports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sub-menu',
          'region' => 'header',
          'weight' => '12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Reactions when viewing the sport page');
  t('sport');
  $export['sports_menu_sub_links'] = $context;

  return $export;
}
