<?php
/**
 * @file
 * hr_events_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_events_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-event-field_clusters'])) {
    $data['node-event-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster(s)' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_events_sectors_views_default_views_alter(&$data) {
  if (isset($data['events'])) {
    $data['events']->display['page']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['events']->display['page']->display_options['filters']['field_clusters_tid']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
      3 => 0,
    ); /* WAS: '' */
  }
}
