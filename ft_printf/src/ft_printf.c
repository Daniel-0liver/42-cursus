/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:51:49 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/02 12:34:51 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int	ft_printf_d(int d)
{
	int		lenght;
	
	lenght = strlen(d);
	write(1, &d, )
}

int	ft_check_arg(va_list arg, char c)
{
	int	lenght;

	lenght = 0;
	if(c == 'd')
		ft_printf_d(va_arg(arg, int));
		
}

int ft_printf(const char *str, ...)
{
	va_list		arg;
	int			i;
	int			lenght;
	char		c;

	i = 0;
	lenght = 0;
	va_start(arg, str);
	while (str[i])
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			printf("test\n");
			lenght++;
			i++;
		}
		else
			lenght += write(1, &str[i], sizeof(char));
		i++;
	}
	va_end(arg);
	return (lenght);
}

int main()
{
	int i;

	i = ft_printf("%as%a%a");
	printf("\n%d", i);
	return 0;
}