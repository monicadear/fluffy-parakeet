<?php
/**
 * @file
 * event_event_calendar_upcoming.features.inc
 */

/**
 * Implements hook_views_api().
 */
function event_event_calendar_upcoming_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function event_event_calendar_upcoming_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Upcoming events'),
      'has_title' => '1',
      'title_label' => t('Title of Event'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
