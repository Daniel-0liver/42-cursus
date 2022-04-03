#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;

	i = 10;

	i = ft_printf("%d%c", i, 'a');
	return 0;
}