#!/usr/bin/python
import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )
print("""
<html>
<head>""")
print("""<script src="chart.js" type="text/javascript"></script>""")
print("""<link rel="stylesheet" href="chart.css" type="text/css" />""")
print("""<title>Homework 8 </title>""")

print("""<h1 onClick="toggle()"> Sivan spiel, cs102c, oct.19""" "</h2>")

print("""
</head>
""")
print("""
<table id="testme" class="visible">
""")





h = 3
x = -100
y = 0
yp = 0
yint = 0
ysum = 0

form = cgi.FieldStorage()
w = int(form["A"].value)
y = int(form["B"].value)
z = int(form["C"].value)

if "A" in form:
        if "B" in form:
              if "C" in form:
		print( "<tr><th>x</th> <th>y</th> <th>yprime</th> <th>ysum</th> </tr>")



		for x in range (-100,100):
				yp= 5 # ( ( w*(x*x*x)-(y*x*x)+(z*x) )  -  (  w*(x-h)*(x-h)*(x-h) - y*(x-h)*(x-h) + z*(x-h) ) )  /h

				y= 10 # ( w*(x*x*x) -(y*(x*x)) +(z*x) )

				yint= 15 #  ( ( w*(x*x*x)-(y*x*x)+(z*x))  + ( w*(x-h)*(x-h)*(x-h)  -  y*(x-h)*(x-h)  + z*(x-h)  ))   /h

				ysum = ysum + yint

				if x%2 == 0:
	 				print( "<tr class='even'><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td> </tr>" % (x,y,yp,ysum))
				if x%2 == 1:
	 				print( "<tr class='odd'><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td> </tr>" % (x,y,yp,ysum))
print("""
</table>
</html>
""")
#else:
#  print( "<h1>You didn't give me numbers!</h1>" )

