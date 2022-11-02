#include "maze.h"
#include <stdio.h>
/*Sivan Spiel
professor cusack 
nov 2
*/

int main( int argc, char** argv)
{
	int i=0;
	int location_x = 2;
	clear_maze();
	clear_wall(i);
	build_wall(3);

		for(i=0; i<10; i=i+1)
		{
			if( i==location_x)
			{
				fprintf( stdout, "x");
			}
			else if(is_wall(i) == 1)
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

