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
  <li  onclick="jQuery('.vassadora_fulltext').hide(); jQuery('#vassadora_fulltext_<?php echo $name;?>').show();"><a href='#BRfulltext'><?php echo $info['label']; ?></a></li>
  <?php endforeach; ?>
</ul>
<?php
// Keep track if this is the first page, as we want to render the first
// page, and leave the others hidden.
$first_page = TRUE;
foreach ($pages as $name => $info):
?>
<div class="vassadora_fulltext" id="vassadora_fulltext_<?php echo $name; ?>" <?php if ($first_page): $first_page = FALSE; else: ?>style="display: none;" <?php endif; ?>>
  <?php foreach ($info['sections'] as $section): ?>
  <div class="<?php echo $section['class']; ?>">
    <em class="label"><?php echo $section['label']; ?></em>
    <?php echo $section['text']; ?>
  </div>
  <?php endforeach; ?>
</div>
<?php endforeach; ?>
