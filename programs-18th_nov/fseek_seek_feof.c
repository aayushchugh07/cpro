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

	printf("Read the first 10 characters of bin.c and stop\n");
	for(i = 0; i < 10; i ++)
	{
		fscanf(fp, "%c", &c);
		putchar(c);
	}

	putchar('\n');

	printf("Now check what feof returns ...\n");
	if(feof(fp))
		printf("EOF was reached.\n");
	else
		printf("EOF wasn't reached.\n");

	fclose(fp);

	return 0;
}

