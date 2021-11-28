/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:16:20 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/28 20:37:23 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!*s2)
		return ((char *)s1);
	j = ft_strlen(s2);
	while (i + j <= n && s1[i])
	{
		if (!ft_strncmp(s1 + i, s2, j))
			return ((char *)s1 + i);
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
