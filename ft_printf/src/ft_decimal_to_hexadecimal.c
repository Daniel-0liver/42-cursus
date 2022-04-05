/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexadecimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:26:27 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/04 23:58:28 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_to_hexadecimal(unsigned long d, char *str, int index)
{
	if (d > 15)
		index = ft_decimal_to_hexadecimal(d / 16, str, index);
	if ((d % 16) <= 9)
		str[index] = ((d % 16) + 48);
	else
		str[index] = (d % 16 + 87);
	index += 1;
	return (index);
}


