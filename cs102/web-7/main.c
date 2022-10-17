#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

#include "functions.h"
      
        
/*
        *sivan spiel
        *cs102c2022fall
        *hw5/9.28
         
*/
	

	int main( int argc, char **argv )
	{
fprintf(stdout, "Content-type: text/html\n\n);
fprintf(stdout, "<html>");
fprintf(stdout, "<head>");
fprintf(stdout, "<title>HW7</title>);
fprintf(stdout, "</head>");

  	   int array[8][12];
 	   int array2[12][8];
	   int array3[12][12];
	   srand48(getpid());
	   fill8x12(array);
	   fill12x8(array2);
	   cross(array,array2,array3);
	   print8x12(array);
	   print12x8(array2);
       
 	   print12x12(array3);

		return 0;
	}
