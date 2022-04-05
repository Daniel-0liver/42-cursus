/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:00:44 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/05 00:03:23 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long d)
{
	int		lenght;
	char	*str;

	str = (char*)malloc(16 * sizeof(char));
	write(1, "0x", 2);
	lenght = ft_decimal_to_hexadecimal(d, str, 0);
	str[lenght] = 0;
	lenght = ft_print_s(str);
	lenght += 2;
	free(str);
	str = NULL;
	return (lenght);
}
