#include <stdio.h>

int main()
{
	int x = -13535;
	printf("The value of x is %d\n", x);
	printf("In the following statements, various specifiers will be used to print the value of x.\n");
	printf("This was printed using %%10d: --%10d--\n", x);
	printf("This was printed using %%-10d: --%-10d--\n", x);
	printf("This was printed using %%.10d: --%.10d--\n", x);
	printf("This was pritned using %%u: --%u--\n", x);
	printf("This was printed using %%#o: --%#o--\n", x);
	printf("This was printed using %%#x: --%#x--\n", x);

	float y = 13252.234335;

	int * ptrx = &x;

	printf("The value of y is %f\n", y);
	printf("This was printed using %%15f: --%15f--\n", y);
	printf("This was printed using %%-15f: --%-15f--\n", y);
	printf("This was printed using %%.15f: --%.15f--\n", y);
	printf("This was printed using %%15.9f: --%15.9f--\n", y);

	printf("%e %E %g %g\n", 265.734, 265.734, 2.42, 26246464.3264);

	printf("%p\n", ptrx);

	printf("                    This line was printed with some characters left out \r");
	printf("This line adds some.\n");
	printf("There is a vertical tab after this line. \v");
	printf("This line was printed after the vertical tab.\n");
	printf("Another vertical tab after this\v");
	printf("Text after vertical tab.\n");

	printf("\n --- \n");

	printf("Now let's scan some data.\n");
	printf("Give three integers separated by spaces: ");
	
	int alpha, beta;

	scanf("%d %*d %d", &alpha, &beta);
	printf("Scanned only the first and the third integers - ignored the second: %d %d\n", alpha, beta);

	return 0;
}
