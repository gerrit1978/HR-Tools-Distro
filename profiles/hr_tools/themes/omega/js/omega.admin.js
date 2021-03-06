(function ($) {

/**
 * Allows administrators to click on the icon of a layout instead of having to
 * target the radio button in order to select it.
 */
Drupal.behaviors.omegaThemeSettingsLayouts = {
  attach: function (context, settings) {
    $('.form-item-omega-layout .omega-layout-icon').click(function () {
      $(this).siblings('.form-item').find('input').click().change();
    });
  }
}

/**
 * Provide a nice little summary for the vertical tab pane of each extension
 * which indicates whether or not it is currently enabled.
 */
Drupal.behaviors.omegaExtensionSummary = {
  attach: function (context, settings) {
    $('fieldset[id^=edit-].omega-extension', context).each(function () {
      var extension = $(this).attr('id').substring(5);
      var $fieldset = $(this);
      var $checkbox = $('input[name="omega_toggle_extension_' + extension + '"]', $(this).closest('form'));

      $(this).drupalSetSummary(function () {
        if (!$checkbox.is(':checked')) {
          return Drupal.t('This extension is currently disabled');
        }
      })

      $checkbox.change(function () {
        $fieldset.trigger('summaryUpdated');
      });
    });
  }
}

})(jQuery);
