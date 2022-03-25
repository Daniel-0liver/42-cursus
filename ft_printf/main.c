#include <stdio.h>

int main()
{
	// unsigned int n;
	unsigned int n2;
	int *i;
	char *str;
	char **str1;
	unsigned int t;
	// char test[1000];
	str = "teste";

	t = &str;

	printf("%p\n%u", &str, t);
	

	// n = -54;
	// i = -54;
	// n2 = -55;
	// printf("%d\n%u\n%u", i, n, n2);
	return 0;
}