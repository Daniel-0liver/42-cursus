/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:49:21 by dateixei          #+#    #+#             */
/*   Updated: 2022/03/03 00:10:53 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t	sizeOne, size_t sizeTwo)
{
	char	*str;
	void	*str_return;
	int		full_size;
	
	full_size = sizeOne * sizeTwo;
	str_return = malloc(full_size);
	if (!str_return)
		return (NULL);
	str = str_return;
	while (full_size--)
		str++ = (char) 0;
	return (str_return);
}