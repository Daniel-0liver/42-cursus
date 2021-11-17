/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:37:47 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/17 13:37:47 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, unsigned int n) {
    unsigned char *t;

    t = s;
    while (n--)
    {
        *t++ = (unsigned char)c;
    }
	return s;
}