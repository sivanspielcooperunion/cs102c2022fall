#include <stdio.h>
#include "file.h"
#include "maze.h"
static room_t maze[10][10];


static int location_x;
static int location_y;
void clear_maze()
{
        int i=0;
	int j=0;	
          for(i=0; i<10; i=i+1)
          {
          for(j=0; j<10; j=j+1)
	 	{         
	    	maze[i][j].wall=0;
                }
	}	
}


int is_wall(int x,int y)
{
        return maze[x][y].wall;
}
                        

void build_wall(int x,int y)   
{
        maze[x][y].wall = 1;
}
                         
void clear_wall(int x, int y)
{
        maze[x][y].wall=0;
}

void set_location_x( int x)
{
	location_x=x;
}

int is_treasure(int x, int y)
{
        return maze[x][y].treasure;
}

void build_treasure(int x, int y)
{
        maze[x][y].treasure =1;
}

void clear_treasure(int x, int y)
{
        maze[x][y].treasure = 0;
}

void set_location_y( int y)
{
	location_y= y;
}

int get_location_x()
{
	return location_x;
}

int get_location_y()
{
	return location_y;
}

void print_maze()
{
	int i=0;
	int j=0;
	for( j=0; j<10; j++)
	{
	for(i=0; i<10; i++)
	{
		 if( i == get_location_x()  && j == get_location_y())

                        {
                                fprintf( stdout, "x ");
                        }
                        else if(is_wall(i,j ))
                        {
                                fprintf(stdout, "##");

                        }
			else if(is_treasure(i,j))
			{
				fprintf(stdout, "T ");
			}
                        else
                        {
                                fprintf(stdout, ". ");
                        }
             }
		fprintf(stdout, "\n");
}
        fprintf(stdout, "\n");
}

void move_right()
{
	if((get_location_x()+1)<10)
	{
		if( is_wall(get_location_x()+1, location_y) !=1) 
		{
			set_location_x(location_x+1);
		}
	}
}

void move_left() 
{       
        if((get_location_x()-1)>=0)
        {        
                if( is_wall(get_location_x()-1, location_y) !=1)
                {               
                        set_location_x(location_x-1);
                }       
        }                
}                         
void move_down()
{
	if((get_location_y()+1)<10)
	{
		if( is_wall(location_x, get_location_y()+1) !=1 )
		{
			set_location_y(location_y + 1);
		}
	}
}
void move_up()
{
        if((get_location_y()-1)>=0)
        {        
                if( is_wall(location_x, get_location_y()-1) !=1 )
                {
                        set_location_y(location_y - 1);
                }
        }                
}

