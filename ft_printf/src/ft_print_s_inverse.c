/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_inverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:31:51 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/04 01:37:59 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s_inverse(char *str)
{
	int	lenght;
	int	index;

	index = ft_strlen(str);
	lenght = index;
	while (index-- >= 0)
		ft_putchar_fd(str[index], 1);
	return (lenght);
}