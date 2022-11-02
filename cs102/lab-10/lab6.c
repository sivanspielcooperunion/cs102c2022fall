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
	move_right(i);
	print_maze(i);
	move_left(i);
	print_maze(i);
	move_left(i);
	print_maze(i);
	move_left(i);
	print_maze(i);

	return 0;
}

