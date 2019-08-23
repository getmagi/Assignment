<?php

/**
 * @file
 * greetings_feature.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function greetings_feature_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'all_greetings';
  $endpoint->server = 'rest_server';
  $endpoint->path = '/api/v1/greetings';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['all_greetings'] = $endpoint;

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'create_greting';
  $endpoint->server = 'rest_server';
  $endpoint->path = '/api/v1/greetings/new';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['create_greting'] = $endpoint;

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'delete_greting';
  $endpoint->server = 'rest_server';
  $endpoint->path = '/api/v1/greetings/delete/%';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['delete_greting'] = $endpoint;

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'greeting_with_id';
  $endpoint->server = 'rest_server';
  $endpoint->path = '/api/v1/greetings/%';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['greeting_with_id'] = $endpoint;

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'publish_greeting';
  $endpoint->server = 'rest_server';
  $endpoint->path = ' /api/v1/greetings/%/publish';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['publish_greeting'] = $endpoint;

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'update_greeting';
  $endpoint->server = 'rest_server';
  $endpoint->path = '/api/v1/greetings/edit/%';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => 'services_oauth',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['update_greeting'] = $endpoint;

  return $export;
}
