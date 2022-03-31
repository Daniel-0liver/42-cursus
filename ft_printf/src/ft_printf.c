/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:51:49 by dateixei          #+#    #+#             */
/*   Updated: 2022/03/31 01:09:20 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	char	*test;
	
	va_list args;
	va_start(args, str);
	test = va_arg(args, char);
	printf("%s\n", test);
	va_end(args);
	return 0;
}

int main()
{
	int i;

	i = ft_printf("aas", "Testing");
	return 0;
}