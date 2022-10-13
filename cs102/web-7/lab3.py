#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print( """
<html>
<head>
<title>LAB7</title>
</head>
<body>
<h1>my header</h1>
<table>
""" )


a= 0 
while(a<100):
	print("<tr><td>my paragraph %s</td></tr>" % (a) )
	a=a+1

print( """
</table>
</body>
</html>
""" )
