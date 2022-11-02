#include <stdio.h>
#include "maze.h"
static room_t room[10];

static int location_x = 2;

void clear_maze()
{
        int i=0;
                for(i=0; i<10; i=i+1)
                {
                        room[i].wall=0;
                }
}
                 
int is_wall(int x)
{
        return room[x].wall;
}
                        
void build_wall(int x)   
{
        room[x].wall = 1;
}
                         
void clear_wall(int x)
{
        room[x].wall=0;
}

void set_location_x( int x)
{
	location_x=x;
}

int get_location_x()
{
	return location_x;
}

void print_maze()
{
	int i=0;
	for( i=0; i<10; i=i+1)
	{
		 if( i==location_x)
                        {
                                fprintf( stdout, "x");
                        }
                        else if(is_wall(i) == 1)
                        {
                                fprintf(stdout, "##");

                        }
                        else
                        {
                                fprintf(stdout, ". ");
                        }
                }
        fprintf(stdout, "\n");
}
