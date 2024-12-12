<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <h1>registration form</h1>
        Name:
        <input type="text" name="name">
        Roll no:
        <input type="number" name="roll no">
        Email:
        <input type="email" name="email">
        Password:
        <input type="password" name="password">
        Phone no:
        <input type="number" name="phone no">
</form>
<?php
    $name=$_POST['name'];
    $rollno=$_POST['roll no'];
    $email=$_POST['email'];
    $password=$_POST['password'];
    $phno=$_POST['phone no'];
    if(isset($reg))
    {
        $con=mysqli_connect('localhost','root','','anupama');
        if(!$con)
        {
            echo "cannot connect";
        }
        else
        {
            echo "connected";
            $q="INSERT INTO register(name,roll number,email,password,ph no)VALUES($name,$rollno,$email,$password,$phno)";
            $query=mysqli_query($con,$q);
            if($query)
            {
            echo "registered";
            }
            else
            {
            echo "cannot registered";
            }
            mysqli_close($con);
        
        }
    }
    ?>
    
    
    
</body>
</html>