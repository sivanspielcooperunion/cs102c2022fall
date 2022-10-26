/*sivan spiel
prof cusack
oct.26
week9*/

#include <stdio.h>
int print_file(char* file);
int string_length(char* string);
int main(int argc, char** argv)
{
FILE* file;
char scratch[1000];
char filename[1000] ="file.txt";
file = fopen(filename, "r");
	int z=1;
	int v=1;
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
	while(fgets(scratch, 1000, file) != NULL)
	{
		v=v+1;
		z=z+string_length(scratch);
	}
	fprintf(stdout, "foo.txt  %d lines %d bytes\n", v, z);

	fclose(file);
}

}
int print_file(char* file)
{
 fprintf(stdout,"print_file(%s) \n", file);
  
}
int string_length(char* file)
{
	int x=0;
	while( file[x]!='\0')
	{
		x=x+1;
	}
	return x; 
}
