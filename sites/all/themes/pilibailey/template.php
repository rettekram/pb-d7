<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


function pilibailey_preprocess_page(&$vars){
  $vars['path_to_subtheme'] = drupal_get_path('theme', 'pilibailey');
}