#include <stdio.h>
/*Sivan Spiel
professor cusack 
nov 2
*/
typedef struct {int wall;} room_t;
int main( int argc, char** argv)
{
	room_t room[10];
	int i;

	for(i=0; i<10; i=i+1)
	{
		room[i] .wall=0;
	}
	room[3].wall = 1;
		for(i=0; i<10; i=i+1)
		{
			if(room[i].wall == 1)
			{
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
