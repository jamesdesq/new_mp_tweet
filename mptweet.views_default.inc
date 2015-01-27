<?php 

/**
* Implements hook_views_default_views().
**/
function mptweet_views_default_views() {
  //Finds all files that match a given mask in a given directory
  //In our case, looks for any files named *.view in the /views directory
  
  $files = file_scan_directory(drupal_get_path('module', 'mptweet'). '/views', '/.view/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }

  //Check that there are views in the directory
  //This keeps the site from throwing errors if there are no views to return
  if ($views) {
    return $views;
  }
}
