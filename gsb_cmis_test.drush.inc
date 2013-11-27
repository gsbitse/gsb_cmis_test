<?php

/**
 * @file
 * Drush commands for GSB CMIS Test
 */

/**
 * Implements hook_drush_command().
 */
function gsb_cmis_test_drush_command() {
  $items = array();
  $items['gsb-cmis-test-doit'] = array(
    'description' => 'GSB CMIS Test doIt',
    'aliases' => array('gsbcmistest-doit'),
  ); 
  return $items;
}

/**
 * Implement hook_drush_help().
 */
function gsb_cmis_test_drush_help($command) {
  switch ($command) {
    case 'drush:gsb-cmis-test-doit':
      return dt('Run cmis test doit command');
  }
}

/**
 * Runs the gsb cmsi test doit command
 */
function drush_gsb_cmis_test_doit() {

  gsb_cmis_test_alfresco_ping('urn:uuid:136cf672-64c4-4521-a713-c91be03f3632');
  
  // log to the command line with an OK status
  drush_log(dt('Yo... from cmis test doit command'), 'ok');  
  
}

