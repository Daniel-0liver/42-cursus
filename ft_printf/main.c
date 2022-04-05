#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	char *str;

	str = "teste";
	i = ft_printf("%u\n", -645123);
	printf("%d\n", i);
	i = printf("%u\n", -645123);
	printf("%d", i);
	return 0;
}