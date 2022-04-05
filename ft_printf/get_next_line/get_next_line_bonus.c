/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:49:12 by dateixei          #+#    #+#             */
/*   Updated: 2022/03/16 00:24:42 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_join_and_free(char	*buffer, char	*buffer_read)
{
	char	*join_result;

	join_result = ft_strjoin(buffer, buffer_read);
	free(buffer);
	return (join_result);
}

char	*ft_read_file(int fd, char *buffer)
{
	char	*buffer_read;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	buffer_read = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer_read, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer_read);
			return (NULL);
		}
		buffer_read[bytes_read] = 0;
		buffer = ft_join_and_free(buffer, buffer_read);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer_read);
	return (buffer);
}

char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_next_line(char	*buffer)
{
	char	*buffer_line;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	buffer_line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		buffer_line[j++] = buffer[i++];
	free(buffer);
	return (buffer_line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next_line(buffer);
	return (line);
}
