#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main( int argc, char **argv )

/*
        *sivan spiel
        *cs102c2022fall
	*lab2

*/
{
	int r;
	r= mrand48();
        int array[100];
        int i=0;
        for (i=0; i<100;i=i+1)
        {
	 r=mrand48();
          array[i]=(r%100);
		
        }
          int j=0;
          for (j=0; j<100;j=j+1)
        {


          fprintf(stdout, "array[%d] =  %d\n",j,array[j]);
        }
return 0;
}






