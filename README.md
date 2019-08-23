# mycorp_greeting
Exercise:
Create a custom Drupal 7 module named (mycorp_greeting) which will provide the following:
1. Greeting content type with two fields:
  - Greeting title
  - Greeting image
2. Expose this greeting content type as REST API using the services (https://www.drupal.org/project/services)
module API. This module will provide the following endpoints which will return the JSON response.

  1. /api/v1/greetings - GET 
    Return the list of greetings.
  2. /api/v1/greetings/{greetingID} - GET
    Return a specific greeting of given id.
  3. /api/v1/greetings - POST
    Creates a new greeting.
  4. /api/v1/greetings/{greetingID} - PUT
    Updates an existing greeting.
  5. /api/v1/greetings/{greetingID} - DELETE
    Delete an existing greeting.
  6. /api/v1/greetings/{greetingID}/publish - POST
    Publish/unpublish a greeting of given id

3. Use the proper Drupal 7 coding standard.
4. Use the `features` module to export `greetings` content type and all the endpoints provided by your custom module.
