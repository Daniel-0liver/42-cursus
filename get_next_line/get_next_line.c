/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:33:56 by dateixei          #+#    #+#             */
/*   Updated: 2021/12/09 01:33:57 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// This function will read the file until the eol or eof
// and return the line allocated in the buffer.
char	*read_file(int	fd, char	*buffer)
{
	char	*buffer_read; // Will keep the string read
	int		bytes_read; // The amount of bytes read
	int i = 0;
	
	if (!buffer) // If buffer == NULL malloc it
		buffer = ft_calloc(1, 1);
	buffer_read = calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1; // Init with 1 to enter the while
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer_read, BUFFER_SIZE);
		// If find some error when read, clear the buffer and return NULL
		if (bytes_read == -1)
		{
			free(buffer_read);
			return (NULL);
		}
		buffer_read[bytes_read] = 0;
		printf("%s\n", buffer_read);
		// Stop when find \n
		if (ft_strchr(buffer_read, '\n'))
			break ;
		printf("%s\n", buffer_read);
	}
	return (buffer);
}

char	*get_next_line(int fd) 
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_strjoin(line, buffer);
	return (line);
}