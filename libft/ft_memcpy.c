/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:35:47 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/21 13:35:47 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
	size_t i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}

// int main() {
// 	char *test = "testing";
// 	// char *ori = "testing";
	
// 	char *testcpy = ft_memcpy(testcpy, test, 5);
// 	// char *orig = memcpy(orig, ori, 5);

// 	printf("Original: %s, copy: %s, \n", test, testcpy);
// 	// printf("Original: %s, copy: %s, \n", ori, orig);

// 	return 0;
// }