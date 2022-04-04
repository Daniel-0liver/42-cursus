/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:00:44 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/04 01:38:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long d)
{
	int		lenght;
	char	*str;

	str = (char*)malloc(16 * sizeof(char));
	str = ft_decimal_to_hexadecimal(d, str);
	write(1, "0x", 2);
	lenght = 2;
	lenght += ft_print_s_inverse(str);
	free(str);
	return (lenght);
}
