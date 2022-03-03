/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:49:12 by dateixei          #+#    #+#             */
/*   Updated: 2022/03/02 23:54:04 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read_file(int fd, char *buffer)
{
	char	*buffer_read;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, 1);
}

char	*get_next_line(int fd)
{
	static char	*buffer; //Buffer to keep
	char		*line; //Line to return

	//Basic check
	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
	
}