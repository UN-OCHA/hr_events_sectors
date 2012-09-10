<?php
/**
 * @file
 * hr_events_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_events_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-event-field_clusters.field_instance|label"] = 'Sectors';

  // Exported overrides for: views_view
  $overrides["views_view.events.display|page|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.events.display|page|display_options|filters|field_clusters_tid|expose|remember_roles"] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

 return $overrides;
}
