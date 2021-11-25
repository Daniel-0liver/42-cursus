/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:55:21 by dateixei          #+#    #+#             */
/*   Updated: 2021/11/24 20:55:21 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s) {
	char	*dup_str;
	int		size;
	int		i;

	
	size = ft_strlen(s);
	if(!s)
		return (NULL);
	dup_str = (char *)malloc(size + 1 * sizeof(char));
	if(!dup_str)
		return (0);
	i = 0;
	while (s[i])
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = s[i];
	return (dup_str);
}