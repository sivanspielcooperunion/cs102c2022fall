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
	int j=0;
	char load_and_save[1000];
	clear_maze();
	set_location_x(0);
	clear_wall(i,j);
	char scratchpad[1000];

if(argc>1)
 {
	clear_maze();
	read_file(argv[1]);
 }
 print_maze();


while(fgets(scratchpad, 1000, stdin) != NULL)
{
	if(sscanf(scratchpad,"empty %d %d", &i, &j) == 2 && i != get_location_x() && j != get_location_y())
	 {
		clear_wall(i,j); 
		clear_treasure(i,j);
		print_maze();
	 }
	if( sscanf(scratchpad, "wall %d  %d", &i, &j) == 2 && i != get_location_x() && j != get_location_y())
	{
		build_wall(i,j);
		print_maze();
	}
	if( sscanf(scratchpad, "treasure %d  %d", &i, &j) == 2 && i != get_location_x() && j != get_location_y())
        {
                build_treasure(i,j);
                print_maze();
        }
	if(sscanf(scratchpad, "x %d", &i ) == 1 && sscanf(scratchpad, "x %d", &i ) == 1 && i != get_location_x() && j != get_location_y())
	{
		set_location_x(i);
		set_location_y(j);
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

	else if(scratchpad[0] == 'u')
	{
		move_up();
		print_maze();
	}
	else if(scratchpad[0] == 'd')
	{
		move_down();
		print_maze();
	}


	if(sscanf( scratchpad, "load %s", load_and_save) ==1)
	{
		clear_maze();
		read_file(load_and_save);
	}
	if(sscanf( scratchpad, "save %s", load_and_save) ==1)
	{
		save_file(load_and_save);
		break;
	}
	if(sscanf( scratchpad, "x %d", &i) ==1)
	{
		set_location_x(i);
		print_maze();
	}
	if(sscanf(scratchpad, "y %d", &j) ==1)
	{
		set_location_y(j);
		print_maze();
	}
	if( is_treasure(get_location_x(), get_location_y()) ==1)
	{
		fprintf(stdout, "WINNER!\n");
		return 0;	
	}



}
	return 0;
}

