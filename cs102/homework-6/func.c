#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "func.h"


void reverse_string( char* string )
	{
		
		int i=0;
		int len = string_length(string);
	for(i=0; i<(len/2); i=i+1)
	{ 
		char extra = string[i];
		string[i]=string[ len-(i+1)  ];
		string[len-(i+1)]= extra;		

	}
/*		fprintf(stdout, " %s\n", string);*/
	}






int string_length(char* string)
{


int s=0;
s=0;
	while( string[s]!='\0')
	{
		
     		s=s+1;

	}

return s;
}
