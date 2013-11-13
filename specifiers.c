#include <stdio.h>

int main()
{
	int x = 3873966;
	int y = -3546;
	float f = 245.235256;

	printf("%+d %+d\n", x, y);
	printf("%-d %-d\n", x, y);
	printf("% d % d\n", x, y);
	printf("% d\n%+d\n", x, x);

	return 0;
}
