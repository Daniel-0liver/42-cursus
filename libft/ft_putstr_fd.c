/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:03:42 by dateixei          #+#    #+#             */
/*   Updated: 2021/12/05 17:49:19 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string ’s’ to the given file
// descriptor.

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	
	i = 0;
	while (s[i])
	{
		if (!s)
			return ;
		write(fd, &s[i], 1);
		i++;
	}
}