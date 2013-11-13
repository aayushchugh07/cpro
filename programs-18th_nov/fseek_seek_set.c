#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("bin.c", "r");

	if(fp == NULL)
	{
		printf("Couldn't open file.\n");
		exit(0);
	}

	char c;
	printf("Printing the file once.\n");
	while(fscanf(fp, "%c", &c) != EOF)
		putchar(c);   // This is equivalent to 
				// printf("%c", c);

	fseek(fp, 0, SEEK_SET);
	clearerr(fp);

	printf("\nPrinting the file again.\n"); 
	while(fscanf(fp, "%c", &c) != EOF)
		putchar(c);

	fclose(fp);

	return 0;
}

