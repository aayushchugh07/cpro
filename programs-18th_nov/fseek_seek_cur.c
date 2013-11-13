#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("bin.c", "r");
	
	int i;

	if(fp == NULL)
	{
		printf("Couldn't open file.\n");
		exit(0);
	}

	char c;

	fseek(fp, 10, SEEK_CUR);
	printf("Printing bin.c after skipping the first 10 characters\n");
	while(fscanf(fp, "%c", &c) != EOF)
		putchar(c);

	fclose(fp);

	return 0;
}

