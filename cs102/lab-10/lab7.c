#include "maze.h"
#include <stdio.h>
/*Sivan Spiel
professor cusack 
nov 2
*/

int main( int argc, char** argv)
{
	int i=0;
	clear_maze();
	clear_wall(i);
	build_wall(3);
	print_maze(i);
	char scratchpad[1000];
while(fgets(scratchpad, 1000, stdin) != NULL)
{
	if(scratchpad[0] =='l')
	{
		move_left();
		print_maze();
	}
	else if(scratchpad[0] == 'r')
	{
		move_right();
		print_maze();
	}

}
	return 0;
}

