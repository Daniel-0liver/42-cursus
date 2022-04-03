#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;

	i = 10000000;

	i = ft_printf("%d", i);
	printf("\n%d", i);
	return 0;
}