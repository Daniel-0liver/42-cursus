/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:22:44 by dateixei          #+#    #+#             */
/*   Updated: 2021/10/20 01:22:44 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_ascii(int    c) {
    if ((c >= 0 && c <= 127)) {
		return (1);
	} else
	    return (0);
}