#include <stdio.h>
int main( int argc, char **argv )
{

int h = 2;
int x = 0;
int y = 0;
int yp = 0;
int yint = 0;
int ysum = 0;

fprintf( stdout, "x,y,yp, yint \n" ); while( x < 200 )
{

x = x + 2;
yp = ((1+(x*x))-(1+(x-h)*(x-h)))/h;
y= (1+(x*x));
yint= (((1+(x*x))+(1+(x-h)*(x-h)))*2)/h;
ysum = ysum + yint;

fprintf( stdout, "%d,%d,%d,%d,%d\n", x, y, yp, yint, ysum );
}
return 0; }
