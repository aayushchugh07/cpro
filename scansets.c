#include <stdio.h>

int main()
{
	char s[100];
	s[0] = 0;

	scanf("%[^\n]", s);
	printf("%s\n", s);

	scanf("%[abc]", s);
	printf("%s\n", s);

	scanf("%[^abc]", s);
	printf("%s\n", s);

	return 0;
}
