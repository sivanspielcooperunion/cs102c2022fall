#include <stdio.h>
int main( int argc, char** argv )
{
  int i = 0;
  while( i < 10 )
  {
    fprintf( stdout, "%d\n", i );
    i = i + 1;
  }
}
