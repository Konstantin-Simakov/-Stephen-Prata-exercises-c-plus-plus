/* exercise8.c -- Chapter 6 for C++ with C;					*/
/*			   	  use the file "text.txt" for file input	*/
#include <stdio.h>
#include <string.h>			/* for strchr() 				*/
#include <stdlib.h>			/* for exit(), EXIT_FAILURE 	*/

#define SIZE 50

char * s_gets(char *, int);

int main(void)
{
	char filename[SIZE];
	FILE * fp;
	int temp;
	int count = 0;

	puts("Enter the filename to read:");
	if (!s_gets(filename, SIZE))
	{
		fputs("Incorrect filename entered.\n", stderr);
		exit(EXIT_FAILURE);
	}
	if (!(fp = fopen(filename, "r")))
	{
		fprintf(stderr, "Couldn't open the file \"%s\".\n", filename);
		fputs("Program terminaing.\n", stderr);
		exit(EXIT_FAILURE);
	}

	while ((temp = getc(fp)) != EOF)
		count++;
	fclose(fp);

	printf("%d characters in the file \"%s\".\n", count, filename);

	return 0;
}

/* console string input function */
char * s_gets(char * str, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(str, n, stdin);
	if (ret_val)
	{
		find = strchr(str, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
