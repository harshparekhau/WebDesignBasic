
<header>
	<div class="main">
		<div class="logo">
			<img src="styles/images/logo.jpg" alt="logo image">
		</div>
		<ul>
			<li class="<?php if($page=='home'){echo 'active';}   ?>"><a href="index.html">Home</a></li>
			<li class="<?php if($page=='job'){echo 'active';}   ?>"><a href="job.html">Job</a></li>
			<li class="<?php if($page=='test'){echo 'active';}   ?>"><a href="test.html">Test</a></li>			
			<li class="<?php if($page=='enhancements'){echo 'active';}   ?>"><a href="enhancements.html">Enhancements</a></li>
		</ul>
	</div>
</header>
<!DOCTYPE html> 
<html>
<head>
  <title>PHP Head Test</title>
  <?php $data; ?>
</head>
</html>
<head>
    <title>PHP Head Test</title>
    <?php echo $data; ?>
</head>