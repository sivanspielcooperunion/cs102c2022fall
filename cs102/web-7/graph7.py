#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print("""
<html>
<head>
<title>Homework 7 </title>
<h1> Sivan spiel, cs102c, oct.17 </h2>
</head>
<body>
<table>
<tr><b> <td>x</td> <td>y</td> <td>yprime</td> <td>ydoubleprime</td> </b> <tr>
""")


h = 3
x = -100
y = 0
yp = 0
yint = 0
ysum = 0

print("""
<table>
""")

for x in range (-100,100):
	x = x + 2

	yp= ( ( 5*(x*x*x)-(5*x*x)+(6*x) )  -  (  5*(x-h)*(x-h)*(x-h) - 5*(x-h)*(x-h) + 6*(x-h) ) )  /h

	y= ( 5*(x*x*x) -(5*(x*x)) +(6*x) )

	yint=   ( ( 5*(x*x*x)-(5*x*x)+(6*x))  + ( 5*(x-h)*(x-h)*(x-h)  -  5*(x-h)*(x-h)  + 6*(x-h)  ))   /h

	ysum = ysum + yint
	print( "<tr><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td> </tr>" % (x,y,yp,ysum))
print("""
</table>
</body>
</html>
""")
