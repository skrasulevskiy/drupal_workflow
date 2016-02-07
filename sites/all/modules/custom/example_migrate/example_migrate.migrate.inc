<?php
/**
 * @file
 * Declares our migrations.
 */

/**
 * Implements hook_migrate_api().
 */
function example_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'destination handlers' => array(
      'ExampleNodeHandler',
    ),
    'field handlers' => array(
      'ExampleCustomFieldHandler',
    )
  );
  
  return $api;
}
