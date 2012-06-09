<?php

/**
 *
 * Comes from this thread:
 * http://drupal.stackexchange.com/questions/14386#14386
 * Written by Eric Duran
 *
 **/

/**
 * Subclassing SelectQueryExtender.
 *
 * We want to add a 'SlaveTarget' tag to all SELECT queries.
 */

class SlaveTarget extends SelectQueryExtender {
  public function __construct(SelectQueryInterface $query, DatabaseConnection $connection) {
    if ($connection->getTarget() != 'slave') {
      $connection = Database::getConnection('slave', $connection->getKey());
    }
    parent::__construct($query, $connection);
    $this->addTag('SlaveTarget');
  }
}
