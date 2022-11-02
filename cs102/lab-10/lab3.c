#include <stdio.h>
/*Sivan Spiel
professor cusack 
nov 2
*/
typedef struct {int wall;} room_t;
     static room_t room[10];
        void clear_maze();
        int is_wall(int x);
        void build_wall(int x);
        void clear_wall(int x);

int main( int argc, char** argv)
{
	int i=0;
	int location_x = 2;
	clear_maze();
	build_wall(3);
	clear_wall(i);

		for(i=0; i<10; i=i+1)
		{
			if( i==location_x)
			{
				fprintf( stdout, "x");
			}
			else if(room[i].wall == 1)
			{
				is_wall(i);
				fprintf(stdout, "##");
				
			}
			else
			{
				fprintf(stdout, ". ");
			}
		}
	fprintf(stdout, "\n");
	return 0;
}

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
