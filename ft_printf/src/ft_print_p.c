/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:00:44 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/07 00:49:27 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long d)
{
	int		lenght;

	if (d == 0)
		return write(1, "(nil)", sizeof(char) * 5);
	write(1, "0x", 2);
	lenght = ft_decimal_to_hexadecimal(d, 0, 'p');
	lenght += 2;
	return (lenght);
}
