#include <stdio.h>
int main( int argc, char **argv )

/*
	*sivan spiel
	*cs102c2022fall
*/
{
	int array[10];
	int i=0;
	for (i=0; i<10;i=i+1)
	{
	  array[i]=5;
	}  
	  int j=0;
	  for (j=0; j<10;j=j+1)
 	{
 
	  fprintf(stdout, "array[%d] =  %d\n",j,array[j]);
	} 
return 0;
}
