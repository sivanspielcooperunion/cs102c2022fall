import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()


c.create_line( 0, 300, 400, 300)
c.create_line( 200, 0, 200, 600)

h=2



def func (x):
    return ( 5*(x*x*x) -(5*(x*x)) +(6*x) )

def fint(x) : 
    return ( ( 5*(x*x*x)-(5*x*x)+(6*x))  + ( 5*(x-h)*(x-h)*(x-h)  -  5*(x-h)*(x-h)  + 6*(x-h)  ))   /h
    


def fprime (x):
    return ( ( 5*(x*x*x)-(5*x*x)+(6*x) )  -  (  5*(x-h)*(x-h)*(x-h) - 5*(x-h)*(x-h) + 6*(x-h) ) )  /h
def fpprime (x):
    return (fprime(x+h)-fprime(x))

ysum=0
x= -200
while x<201 :
    y= func(x)
    z= fint(x)
    q=fprime(x)
    s=fpprime(x)
    #print(x,y)

  
    
    c.create_rectangle( 2*x+200, (y+300)/30000+300, 2*x+201, (y+301)/30000+300, outline="green")

    c.create_rectangle( x+200, (-ysum/3000000)-100, x+201, (-ysum/3000000)-99, outline="blue")
    ysum = z+ysum

    c.create_rectangle(2*x+200, -q/200+300, 2*x+201, -q/200+301, outline="red")
      
    c.create_rectangle(25*x+200, -s/2+300, 25*x+201, -s/2+300)

    x = x + 1
    

    
tk.mainloop()
