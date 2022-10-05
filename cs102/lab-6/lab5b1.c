/* Sivan Spiel
        cs102c2022
        10-5-22
        prof cusack
*/


#include <stdio.h>
int string_length(char* string);

int main( int argc, char** argv )

{
int i=1;

if(argc>1)
{
  for( i=argc-1; i>0 ;i=i-1)
  {
        fprintf( stdout, "%s %d \n ", argv[i], string_length(argv[i]) );
  }

}
else
{
        fprintf( stdout, "not args found ");
}



 fprintf( stdout, "\n" );
  return 0;
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





