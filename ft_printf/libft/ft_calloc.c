/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:37:24 by dateixei          #+#    #+#             */
/*   Updated: 2022/05/09 01:38:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The calloc() function allocates memory for an array of nmemb elements 
// of size bytes each and returns a pointer
// to the allocated memory.  The memory is set to zero.  If nmemb or 
// size is  0,  then  calloc()  returns  either
// NULL,  or  a  unique  pointer value that can later be successfully 
// passed to free().  If the multiplication of
// nmemb and size would result in integer overflow, then calloc() 
// returns an  error.   By  contrast,  an  integer
// overflow  would  not  be detected in the following call to 
// malloc(), with the result that an incorrectly sized
// block of memory would be allocated:

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocation;
	char	*allocation_zero;
	int		full_size;

	full_size = nmemb * size;
	if (nmemb != 0 && (full_size / nmemb) != size)
		return (NULL);
	allocation = malloc(full_size);
	allocation_zero = allocation;
	while (full_size--)
		*allocation_zero++ = (char)0;
	if (!allocation)
		return (0);
	return (allocation);
}

// int main() {
// 	int *test;

// 	return 0;
// }