/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexadecimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:26:27 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/04 01:30:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_decimal_to_hexadecimal(unsigned long d, char *str)
{
	int		index;
	int		rest;

	index = 0;
	while (d != 0)
	{
		rest = d % 16;
		if(rest > 9)
			str[index] = ((rest - 10) + 'a');
		else
			str[index] = (rest + '0');
		d = (d / 16);
		index++;
	}
	str[index] = '\0';
	return (str);
}
