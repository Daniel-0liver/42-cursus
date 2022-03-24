#include <stdarg.h>
#include <stdio.h>
#include <string.h>



int	ft_printf(const char *str, ...)
{
	char *str_args;
	int	num_args; 
	char char_args;
	int i;
	char	c;
	va_list args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		c = str[i + 1];
		if(c == 'd')
		{
			num_args = va_arg(args, int);
			printf("%d\n", num_args);
		}
		else if(c == 'c')
		{
			char_args = va_arg(args, int);
			printf("%c\n", char_args);
		}
		else if(c == 's')
		{
			str_args = va_arg(args, char*);
			printf("%s\n", str_args);
		} 
		else
			printf("%c", str[i]);
		i++;
	}
	va_end(args);
	return (strlen(str));
}

int main(void)
{
	printf("%d\n%d\n%d\n%i\n%i\n%i\n", -2147483647, 214748364, 2147483647, -2147483647, 214748364, 2147483647);
	return 0;
}	