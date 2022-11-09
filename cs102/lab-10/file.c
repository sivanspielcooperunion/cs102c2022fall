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
