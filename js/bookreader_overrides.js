(function ($) {
  IslandoraBookReader.prototype.buildFullTextDiv = function(jFullTextDiv) {
    jFullTextDiv.find('.BRfloatMeta').height(600);
    jFullTextDiv.find('.BRfloatMeta').width(600);
    if (3 == this.mode) {
      jFullTextDiv.find('.BRfloatMeta').html('<div>' + Drupal.t('Full text not supported for this view.') + '</div>');
    }
    else {
      var index = this.currentIndex();
      var request_data = {
        pids: []
      };
      if (this.mode == 1) {
        request_data.pids.push(this.getPID(index));
      }
      else if (this.mode == 2) {
        var indices = this.getSpreadIndices(index);
        for (var i = 0; i < indices.length; i++) {
          request_data.pids.push(this.getPID(indices[i]));
        }
      }
console.log(request_data.pids);
      $.get(Drupal.settings.vassadora.text_url, request_data,
        function(data) {
          jFullTextDiv.find('.BRfloatMeta').html(data);
        }
      );
    }
  }
})(jQuery)

