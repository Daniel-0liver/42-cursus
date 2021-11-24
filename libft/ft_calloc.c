/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:37:24 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/24 20:37:24 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
	void	*allocation;

	allocation = malloc(nmemb * size);
	if(!allocation)
		return (0);
	ft_bzero(allocation, (nmemb * size));
	return allocation;
}

// int main() {
// 	int *test;

// 	return 0;
// }