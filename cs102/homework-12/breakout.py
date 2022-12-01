#Sivan spiel
#cs102c2022fall

#!/usr/bin/python
from intersect import *

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
    def eachFrame( this ):
      sx, sy, ex, ey = this.coords( this.ball )
      qx, wy, rx, ty = this.coords( this.rectangle )
      if ey>500:
          raise(Exception("YOU LOOSE"))
      print(sx, sy, ex, ey)
      if sx<rx and ex>qx and ey>wy and sy<ty:
          this.ball_velocity_y=-1*this.ball_velocity_y    
      if sx<0 or ex>500:
          this.ball_velocity_x=-1*this.ball_velocity_x
      if sy<0 or ey>500:
          this.ball_velocity_y=-1*this.ball_velocity_y    
      this.move( this.ball, this.ball_velocity_x, this.ball_velocity_y )
      allblocks = this.find_withtag( "block" )
      if len(allblocks) == 0:
        print("WINNER WINNER CHICKEN DINNER")
      for block in allblocks:
            zx, zy, vx, vy = this.coords(block)
            listhit = hits(zx, zy, vx, vy, sx,sy, ex, ey,)
            if listhit:
                print(listhit)
                if 'N' in listhit:
                    this.ball_velocity_y=-1*this.ball_velocity_y
                if 'E' in listhit:
                    this.ball_velocity_x=-1*this.ball_velocity_x
                if 'S' in listhit:
                    this.ball_velocity_y=-1*this.ball_velocity_y
                if 'W' in listhit:
                    this.ball_velocity_x=-1*this.ball_velocity_x
                this.delete(block)
    
             
            #if sx<vx and ex>zx and ey>zy and sy<vy:
            #  print(this.coords(block))
            #this.ball_velocity_y=-1*this.ball_velocity_y
            #this.delete(block)
          
          


      
    def mouseHasMoved( this, event ):
      qx, wy, rx, ty = this.coords( this.rectangle )
      print( event.x, event.y )
      this.move( this.rectangle, (event.x)-((rx)-25), 0)   

      
    def __init__( this, *args, **kwargs):
      Canvas.__init__( this, *args, **kwargs)
      this.ball = this.makeBall( 50, 70 )
      this.rectangle = this.makeRectangle( 225, 475)
      this.bind("<KeyPress>", this.keyWasPressed )
      this.focus_set()
      this.ball_velocity_x = 3
      this.ball_velocity_y = 3
      this.bind( "<Motion>", this.mouseHasMoved )
      this.makeBlock(0,100)
      this.makeBlock(50,100)
      this.makeBlock(90,100)
      this.makeBlock(130,100)
      this.makeBlock(170,100)
      this.makeBlock(210,100)
      this.makeBlock(250,100)
      this.makeBlock(290,100)
      this.makeBlock(330,100)
      this.makeBlock(370,100)
      this.makeBlock(410,100)
      this.makeBlock(450,100)
      this.makeBlock(490,100)


    def makeBlock( this, x, y, color= "magenta"):
        return this.create_rectangle(x,y, x+20, y+10, fill= color, tags="block")


    def makeRectangle( this, x, y, color="#0c9124" ):
        return this.create_rectangle( x, y, x+50, y+10, fill=color)
    def makeBall( this, x, y, color="blue" ):
        return this.create_oval( x, y, x+5, y+5, fill=color )    
    def keyWasPressed( this, event=None ):
      key =event.keysym
      print( "just pressed:", key)
      qx, wy, rx, ty = this.coords( this.rectangle )
      print( qx, wy, rx, ty )
      if key == "Left" and qx!=0:
          this.move( this.rectangle, -25, 0)
      if key == "Right" and rx!=500:
          this.move( this.rectangle, 25, 0)
    

      
# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

# But it ALSO can makeBall()

while( True ):
  canvas.eachFrame()
  root.update()



