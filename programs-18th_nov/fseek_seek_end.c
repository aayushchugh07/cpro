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
	fseek(fp, 0, SEEK_END);
	printf("I just set the file pointer to the end of the file. Now, printing ...\n");
	while(fscanf(fp, "%c", &c) != EOF)
		putchar(c);

	fseek(fp, 0, SEEK_SET);
	clearerr(fp);

	printf("\nI just reset the file pointer to point to the start of the file. Printing the file again.\n");
	while(fscanf(fp, "%c", &c) != EOF)
		putchar(c);

	fclose(fp);

	return 0;
}

