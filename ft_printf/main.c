#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;

	i = 1000;

	i = ft_printf("vzxvc%dc\nvz%%asdfas", i);
	printf("\n%d", i);
	return 0;
}