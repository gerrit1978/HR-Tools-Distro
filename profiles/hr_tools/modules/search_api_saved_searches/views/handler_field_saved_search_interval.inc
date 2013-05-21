<?php

/**
 * @file
 * Contains the SearchApiSavedSearchesViewsHandlerFieldName class.
 */

/**
 * Views field handler for displaying a saved search's name, optionally linked to the search page.
 */
class SearchApiSavedSearchesViewsHandlerFieldInterval extends views_handler_field_time_interval {

  public function option_definition() {
    $options = parent::option_definition();

    $options['custom_labels'] = array('default' => FALSE);

    return $options;
  }

  public function options_form(&$form, &$form_state) {
    $form['custom_labels'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use custom labels defined in the saved search settings'),
      '#default_value' => $this->options['custom_labels'],
    );
    parent::options_form($form, $form_state);
    $form['granularity']['#dependency'] = array(
      'edit-options-custom-labels' => array(0),
    );
  }

  public function render($values) {
    if ($this->options['custom_labels']) {
      $search = !empty($values->id) ? search_api_saved_search_load($values->id) : NULL;
      if ($search) {
        $intervals = $search->settings()->getTranslatedOption('interval_options');
        if (isset($intervals[$search->notify_interval])) {
          return $intervals[$search->notify_interval];
        }
      }
    }
    return parent::render($values);
  }

}
