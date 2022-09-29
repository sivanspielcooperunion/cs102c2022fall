#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include "lab6func.h"

void fill( int array[5][5])
    {
        int r;
     /*    r= mrand48();*/
         
         int i=0;
	 int g=0;
     for (g=0; g<5; g=g+1)
     {
         for (i=0; i<5;i=i+1)
        {
         r=mrand48();
          array[i][g]=(r%100);
        }
     }
    }
void print(int array[5][5])
{
      
      int s=0;
      int j=0;
      for (j=0; j<5;j=j+1)
      {
        for (s=0; s<5; s=s+1)
        {
          fprintf(stdout, "%5d ",  array[j][s]);

        }
           fprintf( stdout, "\n");

      }
}

void add(int array[5][5], int array2[5][5], int array3[5][5])
{
	int a,b;
for(a=0; a<5; a=a+1)
	{
 	  for (b=0; b<5; b=b+1)
		{
		  array3[a][b] = array2[a][b] + array[a][b];
                }

        }
}
