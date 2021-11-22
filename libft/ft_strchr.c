/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:07:07 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/22 02:07:07 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {
	char	tmp_c;

	tmp_c = c;
	while (*s)
	{
		if(*s == tmp_c)
			return ((char *)s);
		s++;
	}
	if (*s == tmp_c)
		return ((char *)s);
	return ((void *)0);
}

// int main() {
// 	char test[] = "testing";
// 	char test2[] = "testing";
// 	char *test_orig;

// 	test_orig = strchr(test, '\0');
// 	char *test_cln = ft_strchr(test2, 's');
// 	printf("%s, %s\n", test, test_orig);
// 	printf("%s, %s\n", test2, test_cln);
// }