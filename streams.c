#include <stdio.h>

int main()
{
	int integer;

	fprintf(stdout, "This was printed to stdout\n");
	fprintf(stderr, "This was printed to stderr\n");

	fprintf(stdout, "Give a integer to be input via stdin: ");
	fscanf(stdin, "%d", &integer);
	fprintf(stdout, "The scanned integer was: %d\n", integer);
	fprintf(stderr, "(Printing to stderr) The scanned integer was: %d\n", integer);

	return 0;
}
