#!/usr/bin/python

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
    def __init__( this, *args, **kwargs):
      Canvas.__init__( this, *args, **kwargs)
      this.ball = this.makeBall( 50, 50 )
      this.rectangle = this.makeRectangle( 225, 475)
      this.bind("<KeyPress>", this.keyWasPressed )
      this.focus_set()

    def makeBall( this, x, y, color="blue" ):
      return this.create_oval( x, y, x+5, y+5, fill=color )

    def makeRectangle( this, x, y, color="red" ):
        return this.create_rectangle( x, y, x+50, y+10, fill=color)
    
    def eachFrame( this ):
      sx, sy, ex, ey = this.coords( this.ball )
      print(sx, sy, ex, ey)
      this.move( this.ball, 1, 1 )


    def keyWasPressed( this, event=None ):
      key =event.keysym
      print( "just pressed:", key)
      sx, sy, ex, ey = this.coords( this.rectangle )
      print( sx, sy, ex, ey )
      if key == "Left" and sx!=0:
          this.move( this.rectangle, -25, 0)
      if key == "Right" and ex!=500:
          this.move( this.rectangle, 25, 0)
     

      
# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

# But it ALSO can makeBall()

while( True ):
  canvas.eachFrame()
  root.update()


