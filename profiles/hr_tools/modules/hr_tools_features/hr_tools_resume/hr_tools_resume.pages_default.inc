<?php
/**
 * @file
 * hr_tools_resume.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hr_tools_resume_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resume';
  $page->task = 'page';
  $page->admin_title = 'Resume';
  $page->admin_description = '';
  $page->path = 'resume';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resume_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'resume';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 30037204,
              1 => 115362423,
              2 => 29617163,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Resume';
  $display->uuid = '1a499570-a2f5-faa4-d15a-eb69af806ec1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f35a566-6578-2c54-790e-58048482098d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'You need to login as applicant in order the create your resume!
',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f35a566-6578-2c54-790e-58048482098d';
    $display->content['new-0f35a566-6578-2c54-790e-58048482098d'] = $pane;
    $display->panels['middle'][0] = 'new-0f35a566-6578-2c54-790e-58048482098d';
    $pane = new stdClass();
    $pane->pid = 'new-d1127785-bbd1-36e4-4dce-c94dcde770f2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd1127785-bbd1-36e4-4dce-c94dcde770f2';
    $display->content['new-d1127785-bbd1-36e4-4dce-c94dcde770f2'] = $pane;
    $display->panels['middle'][1] = 'new-d1127785-bbd1-36e4-4dce-c94dcde770f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0f35a566-6578-2c54-790e-58048482098d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resume'] = $page;

  return $pages;

}
