#include <stdio.h>
int main( int argc, char **argv )
{

int h = 3;
int x = -100;
int y = 0;
int yp = 0;
int yint = 0;
int ysum = 0;

fprintf( stdout, "x,y,yp, yint \n" ); while( x < 100 )
{

x = x + 2;

yp = ( ( 5*(x*x*x)-(5*x*x)+(6*x) )  -  (  5*(x-h)*(x-h)*(x-h) - 5*(x-h)*(x-h) + 6*(x-h) ) )  /h;

y= ( 5*(x*x*x) -(5*(x*x)) +(6*x) );

yint= ( ( 5*(x*x*x)-(5*x*x)+(6*x))  + ( 5*(x-h)*(x-h)*(x-h)  -  5*(x-h)*(x-h)  + 6*(x-h)  ))   /h;

ysum = ysum + yint;

fprintf( stdout, "%d,%d,%d,%d\n", x, y, yp, ysum );

}
return 0; }




