#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print( """
<html>
<head>
<title>LAB7<title>
</head>
<body>
<h1>my header</h1>
""" )


a= 0 
while(a<100):
	print("<p>my paragraph</p>")
	a=a+1

print( """
</body>
</html>
""" )
