#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include "functions.h"

void fill8x12( int array[8][12])
    {
        int r;
    	 /* r= mrand48();*/

         int i=0;
         int g=0;
     	for (g=0; g<8; g=g+1)
     	{
        	 for (i=0; i<12;i=i+1)
        	{
        	    r=mrand48();
          	    array[i][g]=(r%100);
        	}
        }
    }

void fill12x8( int array2[12][8])
    {
        int r;
         /* r= mrand48();*/

         int i=0;
         int g=0;
        for (g=0; g<12; g=g+1)
        {
                 for (i=0; i<8;i=i+1)
                {
                    r=mrand48();
                    array2[i][g]=(r%100);
                }
        }
    }

void cross(int array[8][12], int array2[12][8], int array3[12][12] )
{
	for (int c=0; c<12; c=c+1)
	{
	   for(int x=0;x<12; x=x+1)
	   {
		for(int y; y<12; y=y+1)
		{
			array3[c][y] =array3[c][y]+ array[c][x]*array2[x][y];
		}
	   }
	}
}

void print8x12(int array[8][12])
{

      int s=0;
      int j=0;
      for (j=0; j<8;j=j+1)
      {
        for (s=0; s<12; s=s+1)
        {
          fprintf(stdout, "%5d ",  array[j][s]);

        }
           fprintf( stdout, "\n");

      }
	 fprintf(stdout, "\n");
}

void print12x8(int array[12][8])
{
         
      int s=0;
      int j=0;   
      for (j=0; j<12;j=j+1)
      {
        for (s=0; s<8; s=s+1)
        {
          fprintf(stdout, "%5d ",  array[j][s]);
                    
        }
           fprintf( stdout, "\n");
         
      }
         fprintf(stdout, "\n");
}


void print12x12(int array[12][12])
{
         
      int s=0;
      int j=0;   
      for (j=0; j<12;j=j+1)
      {
        for (s=0; s<12; s=s+1)
        {
          fprintf(stdout, "%5d ",  array[j][s]);
                    
        }
           fprintf( stdout, "\n");
         
      }
         fprintf(stdout, "\n");
}





