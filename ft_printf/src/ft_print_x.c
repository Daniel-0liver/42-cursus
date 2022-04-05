/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:57:58 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/05 00:03:08 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(int d, char c)
{
	int		lenght;
	char	*str;

	str = (char*)malloc(16 * sizeof(char));
	lenght = ft_decimal_to_hexadecimal(d, str, 0);
	str[lenght] = 0;
	if(c == 'x')
		lenght = ft_print_s(str);
	else
	{
		lenght = ft_strlen(str);
		while (lenght > 0)
			str[--lenght] = ft_toupper(str[lenght]);
		lenght = ft_print_s(str);
	}
	free(str);
	str = NULL;
	return (lenght);
}