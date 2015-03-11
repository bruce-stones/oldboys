<?php
/**
 * @file
 * ob_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ob_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2ndchild_selected_interets|entityform|contact_form|form';
  $field_group->group_name = 'group_2ndchild_selected_interets';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_another_child';
  $field_group->data = array(
    'label' => 'Sports Interested In',
    'weight' => '49',
    'children' => array(
      0 => 'field_2ndchild_int_cricket',
      1 => 'field_2ndchild_int_bowls',
      2 => 'field_2ndchild_int_karate',
      3 => 'field_2ndchild_int_soccer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sports Interested In',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-2ndchild-selected-interets field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_2ndchild_selected_interets|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_comments|entityform|contact_form|form';
  $field_group->group_name = 'group_add_comments';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Comments',
    'weight' => '7',
    'children' => array(
      0 => 'field_add_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-add-comments field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_add_comments|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_another_child|entityform|contact_form|form';
  $field_group->group_name = 'group_another_child';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add Another Child',
    'weight' => '5',
    'children' => array(
      0 => 'field_2ndchild_first_name',
      1 => 'field_2ndchild_last_name',
      2 => 'field_2ndchild_dob',
      3 => 'group_2ndchild_selected_interets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add Another Child',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-another-child field-group-fieldset',
        'description' => 'Add Another Child',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_another_child|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_child_info|entityform|contact_form|form';
  $field_group->group_name = 'group_child_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Child Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_child_first_name',
      1 => 'field_child_last_name',
      2 => 'field_child_dob',
      3 => 'group_selected_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Child Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-child-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_child_info|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|entityform|contact_form|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contactf_parent_info';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '33',
    'children' => array(
      0 => 'field_form_home_number',
      1 => 'field_cell_number',
      2 => 'field_form_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_info|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contactf_parent_info|entityform|contact_form|form';
  $field_group->group_name = 'group_contactf_parent_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parent Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_contactf_parent_first_name',
      1 => 'field_contactf_parent_last_name',
      2 => 'group_method',
      3 => 'group_contact_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Parent Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contactf-parent-info field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contactf_parent_info|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_method|entityform|contact_form|form';
  $field_group->group_name = 'group_method';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contactf_parent_info';
  $field_group->data = array(
    'label' => 'Prefered method',
    'weight' => '34',
    'children' => array(
      0 => 'field_method_home_number',
      1 => 'field_method_cell_number',
      2 => 'field_method_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Prefered method',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-method field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_method|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_selected_interests|entityform|contact_form|form';
  $field_group->group_name = 'group_selected_interests';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_child_info';
  $field_group->data = array(
    'label' => 'Sports Interested In',
    'weight' => '42',
    'children' => array(
      0 => 'field_int_bowls',
      1 => 'field_int_cricket',
      2 => 'field_int_karate',
      3 => 'field_int_soccer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sports Interested In',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-selected-interests field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_selected_interests|entityform|contact_form|form'] = $field_group;

  return $export;
}
