import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()


def func (f):
    return f*f+1

x= -200
while x<201 :
    y= func (x)
    
    c.create_rectangle( x, y, x+1, y+1 )
    x = x + 1
    

    
tk.mainloop()
