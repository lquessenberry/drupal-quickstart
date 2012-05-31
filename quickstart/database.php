<?php

/**
 * @file Set up the database before Drupal tries to install itself.
 *
 * One of the tricky features of Pagodabox is that in order to
 * install Drupal, you have to get it running on a local dev
 * installation and then connect to the database through an 
 * ssh tunnel to clone the db.
 *
 * We'll make it so you don't have to do that.
 */

// We only want this script to ever run on the first init of a
// pagodabox-hosted site. Our Boxfile includes environment
// variables that help us.
//if (isset($_SERVER['PLATFORM']) && $_SERVER['PLATFORM'] == 'PAGODABOX') {

  // Load the default settings file for this site.
  // This will populate the $databases variable.
  require_once('../drupal/sites/default/settings.php');
  
  // The db setup in this boxfile has only one db, and we know it's
  // MySQL, so we'll rely on the settings we know.
  $server = $databases['default']['default']['host'];
  $port = $databases['default']['default']['port'];
  $username = $databases['default']['default']['username'];
  $password = $databases['default']['default']['password'];

  echo '<pre>';
  print_r($databases);
  echo '</pre>';

  echo "trying to connect to db: $server:$port, $username, $password<br>";
  $link = mysqli_connect($server, $username, $password, '', $port);
  if (!$link) {
      die('Could not connect: ' . mysql_error());
  }
  $database = $databases['default']['default']['database'];
  echo "does $database exist?<br>";
  if (!mysqli_select_db($link, $database)) {
    // database doesn't exist.
    echo "database doesn't exist, attempting to create it...<br>";
//    $sql = "CREATE DATABASE $database IF NOT EXISTS";
//    if (!mysql_query($sql, $link)) {
if (FALSE){
    //if (!mysql_create_db($databse, $link)) {
      // unable to create DB.... how to tell the user?
      echo "couldn't create database.<br>";
      exit();
    }
  }
  echo 'success!';
//} // end of PLATFORM==PAGODABOX
