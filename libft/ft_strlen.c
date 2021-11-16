/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:13:12 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/16 02:13:12 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

unsigned int    ft_strlen(const char	*str) {
    unsigned int	size;

	size = 0;
	while (str[size])
		size++;
	return size;
}

// int main(void) {

// 	char *str = {"abcde"};

// 	printf("%d\n", strlen(str));
// 	printf("%d\n", ft_strlen(str));

// 	return 0;
// }