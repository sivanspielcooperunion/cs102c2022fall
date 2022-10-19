#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )

print( """<html><head><link rel="stylesheet" href="lab6.css" type="text/css" /><script src= "lab6.js" type= "text/javascript"></script></head><body>""" )

form = cgi.FieldStorage()
if "firstname" in form:
	if "lastname" in form:
		print( "<h1 onClick='changeColor(this)' class='z'> Hi, " + form["firstname"].value + form["lastname"].value + "</h1>" )
else:
  print( "<h1>You didn't give me a name!</h1>" )

print( "</body></html>" )
