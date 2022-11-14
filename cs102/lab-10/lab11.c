#include "maze.h"
#include "file.h"


#include <stdio.h>
/*Sivan Spiel
professor cusack 
nov 2
*/

int main( int argc, char** argv)
{
	int i=0;
	char load_and_save[1000];
	clear_maze();
	set_location_x(0);
	clear_wall(i);
	read_file("test.maze");
	build_wall(9);
	save_file("test2.maze");
	print_maze(i);

	char scratchpad[1000];
while(fgets(scratchpad, 1000, stdin) != NULL)
{
	if(sscanf(scratchpad,"empty %d", &i) ==1)
	 {
		clear_wall(i); 
		print_maze();
	 }
	if( sscanf(scratchpad, "wall %d", &i) ==1)
	{
		build_wall(i);
	}
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

	if(sscanf( scratchpad, "load %s", load_and_save) ==1)
	{
		clear_maze();
		read_file(load_and_save);
		print_maze();
	}
	if(sscanf( scratchpad, "save %s", load_and_save) ==1)
	{
		save_file(load_and_save);
		print_maze();
	}
}
	return 0;
}

