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
      this.ball_velocity_x = 1
      this.ball_velocity_y = 1

    def makeBall( this, x, y, color="blue" ):
      return this.create_oval( x, y, x+5, y+5, fill=color )

    def makeRectangle( this, x, y, color="red" ):
        return this.create_rectangle( x, y, x+50, y+10, fill=color)
    
    def eachFrame( this ):
      sx, sy, ex, ey = this.coords( this.ball )
      print(sx, sy, ex, ey)
      if sx<0 or ex>500:
          this.ball_velocity_x=-1*this.ball_velocity_x
      if sy<0 or ey>500:
          this.ball_velocity_y=-1*this.ball_velocity_y    
      this.move( this.ball, this.ball_velocity_x, this.ball_velocity_y )
      

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


