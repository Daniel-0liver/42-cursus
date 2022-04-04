/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:52:57 by dateixei          #+#    #+#             */
/*   Updated: 2022/04/04 01:32:46 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int 	ft_printf(const char *str, ...);
int		ft_print_d_i(int d);
int		ft_print_c(char c);
int		ft_check_lenght_int(int d);
int		ft_print_s(char *str);
int		ft_print_p(unsigned long d);
char	*ft_decimal_to_hexadecimal(unsigned long d, char *str);
int		ft_print_s_inverse(char *str);

#endif