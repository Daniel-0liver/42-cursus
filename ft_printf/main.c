#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	char *str;

	str = "teste";
	i = ft_printf("%p\n%d\n%i\n%c\n%s\n%%adfasAAFDS", &str, 546, 789, 'a', "test");
	printf("\ni == %d\n%p", i, &str);
	return 0;
}