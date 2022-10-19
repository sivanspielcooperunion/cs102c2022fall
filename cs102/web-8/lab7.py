#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )

print( """<html><body><link rel="stylesheet" href="lab7.css" type="text/css" /><script src="lab7.js" type="text/javascript"></script></head><body>""" )

form = cgi.FieldStorage()
if "firstname" in form:
	if "lastname" in form:
		print("""<h1 onClick="toggle()">disappearing button""" "</h1>" )
		print("""<h1 id="testme" class="visible">Hi,""" + form["firstname"].value + form["lastname"].value + "</h1>" )
else:
  print( "<h1>You didn't give me a name!</h1>" )

print( "</body></html>" )
