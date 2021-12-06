/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:16:20 by dateixei          #+#    #+#             */
/*   Updated: 2021/12/06 03:20:56 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[0])
		{
			k = i;
			while (s2[j] && (s1[k] == s2[j]) && k < n)
			{
				k++;
				if (!s2[++j])
					return (((char *)s1 + i));
			}			
		}
		i++;
	}
	return (NULL);
}

// int main() {
// 	char hello[] = "Hello World";
// 	char s2[] = "or";

// 	printf("%s", ft_strnstr(hello, s2, 5));

// 	return 0;
// }
