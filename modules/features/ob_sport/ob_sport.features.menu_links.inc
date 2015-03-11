<?php
/**
 * @file
 * ob_sport.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ob_sport_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-sub-menu_bowls:node/2
  $menu_links['menu-sub-menu_bowls:node/2'] = array(
    'menu_name' => 'menu-sub-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Bowls',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-sub-menu_bowls:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-sub-menu_cricket:node/3
  $menu_links['menu-sub-menu_cricket:node/3'] = array(
    'menu_name' => 'menu-sub-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Cricket',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-sub-menu_cricket:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-sub-menu_karate:node/4
  $menu_links['menu-sub-menu_karate:node/4'] = array(
    'menu_name' => 'menu-sub-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Karate',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-sub-menu_karate:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-sub-menu_soccer:node/5
  $menu_links['menu-sub-menu_soccer:node/5'] = array(
    'menu_name' => 'menu-sub-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Soccer',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-sub-menu_soccer:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bowls');
  t('Cricket');
  t('Karate');
  t('Soccer');


  return $menu_links;
}
