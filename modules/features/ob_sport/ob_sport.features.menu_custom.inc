<?php
/**
 * @file
 * ob_sport.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ob_sport_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sub-menu.
  $menus['menu-sub-menu'] = array(
    'menu_name' => 'menu-sub-menu',
    'title' => 'Sub menu',
    'description' => 'A sub menu to the main menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A sub menu to the main menu');
  t('Sub menu');


  return $menus;
}
