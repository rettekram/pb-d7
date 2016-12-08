<?php
/**
 * @file
 * pb_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pb_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->uuid = '5ddf86a2-da48-45fd-a4b0-591a45120e66';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-abb626c9-f655-4e2c-8f20-8ba04fc345a4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'promoted_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abb626c9-f655-4e2c-8f20-8ba04fc345a4';
  $display->content['new-abb626c9-f655-4e2c-8f20-8ba04fc345a4'] = $pane;
  $display->panels['middle'][0] = 'new-abb626c9-f655-4e2c-8f20-8ba04fc345a4';
  $pane = new stdClass();
  $pane->pid = 'new-d133338b-68bf-4a8e-9a48-8067c702d1ba';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'promoted_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd133338b-68bf-4a8e-9a48-8067c702d1ba';
  $display->content['new-d133338b-68bf-4a8e-9a48-8067c702d1ba'] = $pane;
  $display->panels['middle'][1] = 'new-d133338b-68bf-4a8e-9a48-8067c702d1ba';
  $pane = new stdClass();
  $pane->pid = 'new-81ca3b2f-8315-4969-b1fa-b2e9b5fbd897';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'promoted_content-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '81ca3b2f-8315-4969-b1fa-b2e9b5fbd897';
  $display->content['new-81ca3b2f-8315-4969-b1fa-b2e9b5fbd897'] = $pane;
  $display->panels['middle'][2] = 'new-81ca3b2f-8315-4969-b1fa-b2e9b5fbd897';
  $pane = new stdClass();
  $pane->pid = 'new-d527ed78-65c6-4f07-97a7-83cbe1d1d7e9';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'promoted_content-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd527ed78-65c6-4f07-97a7-83cbe1d1d7e9';
  $display->content['new-d527ed78-65c6-4f07-97a7-83cbe1d1d7e9'] = $pane;
  $display->panels['middle'][3] = 'new-d527ed78-65c6-4f07-97a7-83cbe1d1d7e9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
