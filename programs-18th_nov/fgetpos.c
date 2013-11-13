#include <stdio.h>

int main()
{
	FILE *fp1 = fopen("bin.c", "r");
	FILE *fp2 = fopen("bin.c", "r");
	
	char c;

	int i;
	int * save_pos;

	printf("Printing bin1.c ...");

	for(i = 0; i < 10; i ++)
	{
		fscanf(fp1, "%c", &c);
		putchar(c);
	}

	fgetpos(fp1, save_pos);
	fsetpos(fp2, save_pos);

	while(fscanf(fp1, "%c", &c) != EOF)
		putchar(c);


	printf("Saved the pointer fp1 after it had printed 10 characters\n");
	printf("Also, set fp2 to this saved pointer\n");
	printf("Printing bin.c using fp2 now ...\n");

	while(fscanf(fp2, "%c", &c) != EOF)
		putchar('\n');

	return 0;
}

