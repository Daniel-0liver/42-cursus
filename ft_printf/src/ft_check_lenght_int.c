/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lenght_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:10:51 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/07 20:52:21 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_lenght_int(int d)
{
	int		lenght;
	char	*str;

	str = ft_itoa(d);
	lenght = ft_strlen(str);
	free(str);
	return (lenght);
}
