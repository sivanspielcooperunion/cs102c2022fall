#include <stdio.h>
#include "maze.h"
#include "file.h"

void read_file( char* filename)
{
	FILE* file;
	char scratchpad[1000];
	int i=1;
	int j=1;
	file=fopen(filename, "r");
	if(file != NULL)
	{
		while(fgets(scratchpad, 1000,file) != NULL)
		{
			if(sscanf(scratchpad, "WALL %d %d", &i, &j) == 2) 
			{
				build_wall(i,j);
			}
			if(sscanf(scratchpad, "X %d", &i) ==1)
			{
				set_location_x(i);
			}
			if(sscanf(scratchpad, "Y %d", &j) ==1)
			{
				set_location_y(j);
			}
			if(sscanf(scratchpad, "TREASURE %d %d", &i, &j) ==2)
			{
				build_treasure(i,j);
			}		



		}
       		fclose(file);
	}
}

void save_file(char *filename)
{
	FILE* file;
	int i;
	int j;
	file = fopen(filename, "w");
	if( file != NULL)
	{
	fprintf(file, "X %d\n", get_location_x());
	fprintf(file, "Y %d\n", get_location_y());
	
		for( i=0; i<10; i=i+1)
		{
		for(j=0; j<10; j=j+1)
		{
			if( is_wall(i,j) ==1)
			{	
				fprintf(file, "WALL %d %d\n", i,j );
			}
			if (is_treasure(i,j) ==1)
			{
				fprintf(file, "TREASURE %d %d\n", i, j);
			}
		}
		}
	}
		fclose(file);
}
