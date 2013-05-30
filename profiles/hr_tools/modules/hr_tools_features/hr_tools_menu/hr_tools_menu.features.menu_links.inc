<?php
/**
 * @file
 * hr_tools_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hr_tools_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:search/job
  $menu_links['main-menu:search/job'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/job',
    'router_path' => 'search/job',
    'link_title' => 'Job search',
    'options' => array(
      'attributes' => array(
        'title' => 'Search for jobs.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Job search');


  return $menu_links;
}
