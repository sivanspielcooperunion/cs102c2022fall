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
b=0
 
while(a<100):
	print("<tr><td> %s</td> <td %s</td> </tr> " % (a,b) )
	a=a+1
	b=a*100
print( """
</table>
</body>
</html>
""" )
