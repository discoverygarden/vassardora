<?php

/**
 * @file
 * Admin From Implementation.
 */

/**
 * Form building function.
 *
 * @see drupal_get_form()
 */
function vassardora_admin_form(array $form, array &$form_state) {
  $form['vassardora_language_one'] = array(
    '#type' => 'textfield',
    '#title' => t('Language 1 Label'),
    '#description' => t('The human readable language label for language 1'),
    '#default_value' => variable_get('vassardora_language_one', 'Language 1'),
  );
  $form['vassardora_language_one_fulltext_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Language 1 Fulltext Datastream'),
    '#description' => t('The datastream ID into which is being used to hold the first language fulltext.'),
    '#default_value' => variable_get('vassardora_language_one_fulltext_datastream', 'LANGUAGE_1'),
  );
  $form['vassardora_language_two'] = array(
    '#type' => 'textfield',
    '#title' => t('Language 2 Label'),
    '#description' => t('The human readable language label for language 2'),
    '#default_value' => variable_get('vassardora_language_two', 'Language 2'),
  );
  $form['vassardora_language_two_fulltext_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('Language 2 Fulltext Datastream'),
    '#description' => t('The datastream ID into which is being used to hold the second language fulltext.'),
    '#default_value' => variable_get('vassardora_language_two_fulltext_datastream', 'LANGUAGE_2'),
  );
  return system_settings_form($form);
}
