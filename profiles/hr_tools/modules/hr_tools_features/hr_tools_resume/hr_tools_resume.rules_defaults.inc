<?php
/**
 * @file
 * hr_tools_resume.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hr_tools_resume_default_rules_configuration() {
  $items = array();
  $items['rules_resume_initialization'] = entity_import('rules_config', '{ "rules_resume_initialization" : {
      "LABEL" : "Resume initialization",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "recruiter_resume" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert", "user_update" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "30037204" : "30037204", "115362423" : "115362423" } },
            "operation" : "OR"
          }
        },
        { "data_is_empty" : { "data" : [ "account:profile-resume" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "resume",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "resume" : "Resume" } }
          }
        },
        { "entity_save" : { "data" : [ "resume" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
