/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:52:57 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/03 03:15:26 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int ft_printf(const char *str, ...);
int	ft_print_d(int d);
int	ft_print_c(char c);
int	ft_check_lenght_int(int d);

#endif