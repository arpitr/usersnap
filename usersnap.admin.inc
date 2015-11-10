<?php

/**
 * @file
 * Code related to administrative tasks for the Usersnap module.
 */


/**
 * Provides a Configuration Form for entering the Usersnap API Key.
 */
function usersnap_admin() {
  $form = array();
  $form['usersnap_apikey'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter the Usersnap API Key'),
    '#default_value' => variable_get('usersnap_apikey', ''),
    '#size' => 60,
    '#maxlength' => 60,
    '#description' => t("Enter the Usersnap API Key. You can get a Key at http://www.usersnap.com."),
    '#required' => TRUE,
  );
  $form['usersnap_position'] = array(
    '#type' => 'select',
    '#title' => t('Widget position'),
    '#description' => t('The feedback widget will be placed in this part of the screen.'),
    '#default_value' => variable_get('usersnap_position', 'bottom_right'),
    '#options' => array(
      'bottom_right' => t('Bottom right corner'),
      'bottom_left' => t('Bottom left corner'),
      'middle_right' => t('Middle right'),
      'middle_left' => t('Middle left'),
    ),
  );
  return system_settings_form($form);
}
