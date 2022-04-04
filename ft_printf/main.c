#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	char *str;

	str = "teste";
	i = ft_printf("%p\n%d\n%i\n%c\n%s\n%%adfasAAFDS\n", &str, 546, 789, 'a', "test");
	printf("%d\n", i);
	i = printf("%p\n%d\n%i\n%c\n%s\n%%adfasAAFDS\n", &str, 546, 789, 'a', "test");
	printf("%d", i);
	return 0;
}