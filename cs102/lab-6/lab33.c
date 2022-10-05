/* Sivan Spiel
        cs102c2022
        10-5-22
        prof cusack
*/


#include <stdio.h>
int main( int argc, char** argv )

{
int i=1;

if(argc>1)
{ 
  for( i=1; i<argc;i=i+1)
  {
        fprintf( stdout, "%s ", argv[i] );
  }

}
else
{
	fprintf( stdout, "not args found ");
}
  


 fprintf( stdout, "\n" );
  return 0;
}






