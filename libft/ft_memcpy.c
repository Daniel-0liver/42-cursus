/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:35:47 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/28 14:11:00 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp_dest;
	char	*tmp_src;

	i = 0;
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

// int main() {
// 	char test[] = "testing";
// 	char *ori = "testing";	
// 	char *testcpy = ft_memcpy(testcpy, test, 5);
// 	// char *orig = memcpy(orig, ori, 5);

// 	printf("Original: %s, copy: %s, \n", test, testcpy);
// 	// printf("Original: %s, copy: %s, \n", ori, orig);

// 	return 0;
// }