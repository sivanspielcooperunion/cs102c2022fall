#include <stdio.h>
int main( int argc, char **argv )
{

int x = 0;
int y = 0;
fprintf( stdout, "x,y \n" ); while( x < 200 )
{
x = x + 2;
y = (1+(x*x));

fprintf( stdout, "%d,%d\n", x, y ); 
}
return 0; }
