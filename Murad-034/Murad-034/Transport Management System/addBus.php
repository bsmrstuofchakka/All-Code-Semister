<!DOCTYPE html>
<?php 
	if(isset($_POST['submit'])){
		include('connect-mysql.php');
		$bnum=$_POST['bus_number'];
		$bdid=$_POST['driver_id'];
		$bcid=$_POST['conductor_id'];
		$broute=$_POST['route'];
		$bprice=$_POST['price'];
		$sql="INSERT INTO bus_details(`bus_number`, `driver_id`, `conductor_id`, `route`, `price`) VALUES ('$bnum','$bdid','$bcid','$broute','$bprice')";
		$conn=mysqli_query($dbcon,$sql);
		if($conn)
			echo "Data Inserted";
		else
			echo"Not inserted";
	}
?>
<html>
	<head>
	
		<meta charset="UTF-8"/>
		<title>Add Bus Details</title>
		<link rel="stylesheet" href="style1.css"/>
	</head>
	<body >
		<form action="addBus.php" method="post" style="background-color:#79a196;">
			<fieldset>
			<legend class="legend">Bus Details</legend>
			<label >Bus Number</label></br>
			<input type="text" name="bus_number" ></br></br>
			<label>Driver Id</label></br>
			<input type="text" name="driver_id" ></br></br>
			<label>Conductor Id</label></br>
			<input type="text" name="conductor_id" ></br></br>
			<label>Route</label></br>
			<input type="text" name="route" ></br></br>
			<label>Price</label></br>
			<input type="text" name="price" ></br></br>
			</br>
			<input type="submit" name="submit" value="SUBMIT">
			<input type="reset" name="reset" value="RESET">
			</fieldset>
		</form>
	</body>
</html>