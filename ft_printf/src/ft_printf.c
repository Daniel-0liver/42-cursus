/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:51:49 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/05 00:07:56 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(va_list arg, char c)
{
	int	lenght;

	lenght = 1;
	if(c == 'c')
		lenght = ft_print_c(va_arg(arg, int));
	if(c == 's')
		lenght = ft_print_s(va_arg(arg, char*));
	if(c == 'p')
		lenght = ft_print_p(va_arg(arg, unsigned long));
	if(c == 'd' || c == 'i')
		lenght = ft_print_d_i(va_arg(arg, int));
	if(c == 'x' || 'X')
		lenght = ft_print_x(va_arg(arg, int), c);
	if(c == '%')
		ft_putchar_fd('%', 1);
	return (lenght);
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
			lenght += ft_check_arg(arg, c);
			i++;
		}
		else
			lenght += write(1, &str[i], sizeof(char));
		i++;
	}
	va_end(arg);
	return (lenght);
}
