<?php
/**
 * @file
 * pb_photo_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pb_photo_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pb_photo_gallery_node_info() {
  $items = array(
    'photo_gallery' => array(
      'name' => t('Photo gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
