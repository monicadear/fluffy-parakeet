<?php
/**
 * @file
 * event_event_calendar_upcoming.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function event_event_calendar_upcoming_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-events-body'
  $field_instances['node-events-body'] = array(
    'bundle' => 'events',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-events-field_attached_files'
  $field_instances['node-events-field_attached_files'] = array(
    'bundle' => 'events',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attached_files',
    'label' => 'Attached Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt doc pdf xls jpg png gif ppt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-events-field_contact'
  $field_instances['node-events-field_contact'] = array(
    'bundle' => 'events',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact',
    'label' => 'Contact',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-events-field_event_date'
  $field_instances['node-events-field_event_date'] = array(
    'bundle' => 'events',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'regular',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_date',
    'label' => 'Event Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'M j Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-events-field_location'
  $field_instances['node-events-field_location'] = array(
    'bundle' => 'events',
    'default_value' => array(
      0 => array(
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 0,
              'city' => 0,
              'coords' => 0,
              'country' => 0,
              'country_name' => 0,
              'locpick' => 0,
              'map_link' => 0,
              'name' => 0,
              'postal_code' => 0,
              'province' => 0,
              'province_name' => 0,
              'street' => 0,
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => '',
                'weight' => 6,
              ),
              'city' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => 'San Jose',
                'weight' => 8,
              ),
              'country' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => 'us',
                'weight' => 14,
              ),
              'delete_location' => array(
                'default' => FALSE,
                'nodiff' => TRUE,
              ),
              'is_primary' => array(
                'default' => 0,
              ),
              'latitude' => array(
                'default' => 0,
              ),
              'lid' => array(
                'default' => FALSE,
              ),
              'locpick' => array(
                'collect' => 0,
                'default' => FALSE,
                'nodiff' => TRUE,
                'weight' => 20,
              ),
              'longitude' => array(
                'default' => 0,
              ),
              'name' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => 'Sharks Ice at San Jose',
                'weight' => 2,
              ),
              'postal_code' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => 95112,
                'weight' => 12,
              ),
              'province' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => 'California',
                'weight' => 10,
                'widget' => 'select',
              ),
              'source' => array(
                'default' => 0,
              ),
              'street' => array(
                '#parents' => array(
                  0 => 'field_location',
                  1 => 'und',
                  2 => 0,
                ),
                'collect' => 1,
                'default' => '1500 S 10th Street',
                'weight' => 4,
              ),
            ),
          ),
        ),
        'name' => 'Sharks Ice at San Jose',
        'street' => '1500 S 10th Street',
        'additional' => '',
        'city' => 'San Jose',
        'province' => '',
        'postal_code' => 95112,
        'country' => 'us',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attached Files');
  t('Body');
  t('Contact');
  t('Event Date');
  t('Location');

  return $field_instances;
}
