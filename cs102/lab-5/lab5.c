#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

#include "lab4func.h"
#include "lab5func.c"

/*
        *sivan spiel
        *cs102c2022fall
        *lab2

*/
void fill( int array[5][5]);
void print(int array[5][5]);

int main( int argc, char **argv )
{
  int array[5][5];
  srand48(getpid());
 fill(array);
 print(array);
return 0;
}

/*void fill( int array[10])
     {
        int r;
         r= mrand48();

         int i=0;
         for (i=0; i<10;i=i+1)
        {
         r=mrand48();
          array[i]=(r%100);
        }

     }
void print(int array[10])
     {
          int j=0;

          for (j=0; j<10;j=j+1)
        {



          fprintf(stdout, "array[%d] =  %d\n",j,array[j]);
        }
      }
*/

