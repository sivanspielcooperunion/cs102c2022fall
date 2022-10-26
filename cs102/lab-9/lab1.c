/*sivan spiel
prof cusack
oct.26
week9*/

#include <stdio.h>
int func(char* string);
int main(int argc, char** argv)
{
	int s=1;
	if(argc)
	{
	 for(s=1; s<argc; s=s+1)
	  {
		  func(argv[s]);
	  }
	}
	else
	{
		fprintf(stdout, "donezo");
	}
}
int func(char* string)
{
 fprintf(stdout,"func(%s) \n", string);
  return 0;
}
