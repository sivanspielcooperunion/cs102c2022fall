/*sivan spiel
prof cusack
oct.26
week9*/

#include <stdio.h>
int print_file(char* file);
int main(int argc, char** argv)
{
FILE* file;
char scratch[1000];
char filename[1000] ="file.txt";
file = fopen(filename, "r");

	int s=1;
	if(argc)
	{
	 for(s=1; s<argc; s=s+1)
	  {
		  print_file(argv[s]);
	  }
	}
	else
	{
		fprintf(stdout, "donezo");
	}
if(file != NULL)
{
	if(fgets(scratch, 1000, file) != NULL)
	{
		fprintf(stdout, "read line: %s", scratch);
	}
	fclose(file);
}

}
int print_file(char* file)
{
 fprintf(stdout,"print_file(%s) \n", file);
  return 0;
}
