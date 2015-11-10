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
  $form['usersnap_language'] = array(
    '#type' => 'select',
    '#title' => t('Widget language'),
    '#description' => t('Preferred interface language for feedback widget.'),
    '#default_value' => variable_get('usersnap_language', 'en'),
    '#options' => usersnap_supported_languages(),
  );
  return system_settings_form($form);
}

/**
 * Helper function to return Usersnap supported languages and language codes.
 *
 * @see https://usersnap.com/docs#language
 */
function usersnap_supported_languages() {
  return array(
    'en' => t('English'),
    'de-informal' => t('German (informal)'),
    'de-formal' => t('German (formal)'),
    'fr' => t('French'),
    'es' => t('Spanish'),
    'pl' => t('Polish'),
    'fa' => t('Farsi'),
    'is' => t('Icelandic'),
    'jp' => t('Japanese'),
    'it' => t('Italian'),
    'hu' => t('Hungarian'),
    'ko' => t('Korean'),
    'cz' => t('Czech'),
    'da' => t('Danish'),
    'no' => t('Norwegian'),
    'sk' => t('Slovakian'),
    'nl' => t('Dutch'),
    'sv' => t('Swedish'),
    'pt' => t('Portuguese'),
    'fi' => t('Finnish'),
    'ru' => t('Russian'),
    'tr' => t('Turkish'),
  );
}
