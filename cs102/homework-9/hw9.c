/*sivan spiel
prof cusack
oct.26
week9*/

#include <stdio.h>
int print_file(char* file2);
int word_count(char* string);
int string_length(char* string);
int main(int argc, char** argv)
{
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
}

/*int print_file(char* filenamee)
{
 int v=1;
 int z=1;
 int f=1;
  fprintf(stdout,"print_file(%s) \n", filenamee);
 FILE* file;
 char scratch[1000];
 file = fopen(filenamee, "r");
  if(file != NULL)
  {
        while(fgets(scratch, 1000, file) != NULL)
        {
                v=v+1;
                z=z+string_length(scratch);
                f=f+word_count(scratch);
        }

        fprintf(stdout, "foo.txt  %d lines %d bytes %d words\n", v, z,f);

        fclose(file);
  }

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
int word_count(char* file)
{
        int f=0;
	int g=0;
        while( file[f]!='\0')
	{
	 if((file[f] != ' ' && file[f+1] == ' '  || file [f]  != '\n' && file[f+1] == '\n'))
	 {
		g=g+1;
	 }
	 f=f+1;
        }
	return g;
}*/
