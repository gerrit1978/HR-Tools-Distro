<?php
/**
 * @file
 * hr_tools_resume.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function hr_tools_resume_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_resume_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'resume';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Anonymous',
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
  $display->title = '';
  $display->uuid = '0e96a16c-cfab-3cf4-edbf-19fe1f55ccd5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-25285bee-ef0e-b674-4133-4c72f3e6df31';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'You need to login as applicant in order the create your resume!',
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
    $pane->uuid = '25285bee-ef0e-b674-4133-4c72f3e6df31';
    $display->content['new-25285bee-ef0e-b674-4133-4c72f3e6df31'] = $pane;
    $display->panels['middle'][0] = 'new-25285bee-ef0e-b674-4133-4c72f3e6df31';
    $pane = new stdClass();
    $pane->pid = 'new-ee0d9cb6-625a-63e4-4539-256f3da39e13';
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
    $pane->uuid = 'ee0d9cb6-625a-63e4-4539-256f3da39e13';
    $display->content['new-ee0d9cb6-625a-63e4-4539-256f3da39e13'] = $pane;
    $display->panels['middle'][1] = 'new-ee0d9cb6-625a-63e4-4539-256f3da39e13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-25285bee-ef0e-b674-4133-4c72f3e6df31';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_resume_panel_context'] = $handler;

  return $export;
}
