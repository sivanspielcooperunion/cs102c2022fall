#include <stdio.h>
#include "maze.h"
static room_t room[10];

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

