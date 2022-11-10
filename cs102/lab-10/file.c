#include <stdio.h>
#include "maze.h"
#include "file.h"

void read_file( char* filename)
{
	FILE* file;
	char scratchpad[1000];
	int i=1;
	file=fopen(filename, "r");
	if(file != NULL)
	{
		while(fgets(scratchpad, 1000,file) != NULL)
		{
			if(sscanf(scratchpad, "WALL %d", &i) == 1) 
			{
				build_wall(i);
			}
		}
       		fclose(file);
	}
}

void save_file(char *filename)
{
	FILE* file;
	int i;
	file = fopen(filename, "w");
	if( file != NULL)
	{
		for( i=0; i<10; i=i+1)
		{
			if( is_wall(i) ==1)
			{	
				fprintf(file, "WALL %d \n", i );
			}
		}
	}
		fclose(file);
}
