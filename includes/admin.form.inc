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
  $form['vassardora_english_fulltext_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('English Fulltext Datastream'),
    '#description' => t('The datastream ID into which is being used to hold the English fulltext.'),
    '#default_value' => variable_get('vassardora_english_fulltext_datastream', 'TRANSCRIPTION_ENG'),
  );
  $form['vassardora_german_fulltext_datastream'] = array(
    '#type' => 'textfield',
    '#title' => t('German Fulltext Datastream'),
    '#description' => t('The datastream ID into which is being used to hold the German fulltext.'),
    '#default_value' => variable_get('vassardora_german_fulltext_datastream', 'TRANSCRIPTION_GER'),
  );

  return system_settings_form($form);
}
