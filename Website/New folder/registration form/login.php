<?php
	$conn=mysqli_connect("localhost","root","7637","web");
	if(!$conn){
			echo("Error Connecttion:".mysqli_connect_error());
		
	}		
	
?>

<html>
<head></head>
<body>
	<?php
		if(isset($_POST['submit'])){
			$username=$_POST['username'];
			$password=$_POST['password'];
			
			$sql="select * from reg where username='$username' and password='$password'";
			$result=mysqli_query($conn,$sql);
			$count=mysqli_num_rows($result);
			
			
			if($count!=0){
				echo"Login Sucessfully";
			}
			else{
				echo"Login Failed";
			}
			
		}
	?>





	<center><h1>Login Form</h1><center>
	<div class="form">
		<form action="login.php" method="POST">
			<center>
				<table>
					<tr>
						<td>Username</td>
						<td><input type="text" name="username" placeholder="username" requird=""></td>
						
						
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
	
	<p>Have you not a member yet?<a href="index.php">Please Log Up</a></p>


</body>




</html>