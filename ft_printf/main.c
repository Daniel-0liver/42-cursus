#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	char *str;

	str = "teste";
	i = ft_printf("%x\n", 123);
	printf("%d\n", i);
	i = printf("%x\n", 123);
	printf("%d", i);
	return 0;
}