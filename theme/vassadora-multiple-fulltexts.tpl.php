<?php
/**
 * @file
 * Template for the full-text override for Vassar.
 */

// XXX: Use of "tabs primary" is a quick hack to get 'em showing in a
// somewhat nice manner.
?>
<ul class="tabs primary">
  <?php foreach ($pages as $name => $info):?>
  <li name="vassadora_fulltext_<?php echo $name;?>" class="vassadora_fulltext_link"><a href='#BRfulltext'><?php echo $info['label']; ?></a></li>
  <?php endforeach; ?>
</ul>
<?php
foreach ($pages as $name => $info):
?>
<div class="vassadora_fulltext" id="vassadora_fulltext_<?php echo $name; ?>">
  <?php foreach ($info['sections'] as $section): ?>
  <div class="<?php echo $section['class']; ?>">
    <em class="label"><?php echo $section['label']; ?></em>
    <?php echo $section['text']; ?>
  </div>
  <?php endforeach; ?>
</div>
<?php endforeach; ?>
