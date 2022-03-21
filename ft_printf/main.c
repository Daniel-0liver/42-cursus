#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	int	num_args; 
	int	i;
	va_list args;

	num_args = ft_strlen(str);
	va_start(args, str);
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
	}
	va_end(args);
	return 0;
}

int main(void)
{
	ft_printf("testando");
	return 0;
}	