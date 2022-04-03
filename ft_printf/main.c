#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;

	i = 1000;

	i = ft_printf("%s\nasdkja\n%s\n%s\n%s\n%c", "123456789", "testando", "another test", "final test str", 'd');
	printf("\n%d", i);
	return 0;
}