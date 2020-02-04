<?php
	$conn=mysqli_connect("localhost","root","7637","web");
?>

<html>
<head></head>
<body>
	<?php
		if(isset($_POST['submit'])){
			$username=$_POST['username'];
			$email=$_POST['email'];
			$password=$_POST['password'];
			
			$query="insert into reg(username,email,password) values('$username','$email','$password')";
			$run=mysqli_query($conn,$query);
			
			if($run){
				echo"Data insert successfully";
			}
			else{
				echo"error:".mysqli_error($conn);
			}
		}
	?>

	<center><h1>Registration Form</h1><center>
	<div class="form">
		<form action="index.php" method="POST">
			<center>
				<table>
					<tr>
						<td>Username</td>
						<td><input type="text" name="username" placeholder="username" requird=""></td>
						
						
					</tr>
					
					<tr>
						<td>Email</td>
						<td><input type="email" name="email" placeholder="email" requird=""></td>
					</tr>
					<tr>
						<td>Password</td>
						<td><input type="password" name="password" placeholder="password" requird=""></td>
						
						
					</tr>
					
					<tr>
						<td></td>
						<td><input type="submit" value="submit" name="submit"></td>
					</tr>
				</table>
			</center>
		</form>
	</div>
	<p>Already a Member? <a href="login.php">Please log in</a></p>


</body>




</html>