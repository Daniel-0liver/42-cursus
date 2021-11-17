/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:45:39 by dateixei          #+#    #+#             */
/*   Updated: 2021/10/22 22:45:39 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char test[50] = {"testando"};
    char test2[50] = {"testando"};
    memset(test + 2, '*', 2);
    ft_memset(test2 + 2, '*', 2);
    printf("Teste ft_memset, %s\n", test);
    printf("Teste ft_memset2, %s\n", test2);
    return 0;
}

// int main()
// {
//     char str[50] = "Aticleworld is a programming Blog.";
//     printf("\nBefore memset(): %s\n\n", str);
//     // Fill 6 characters starting from str[11] with '*'
//     memset(str + 11, '*', 6);
//     printf("After memset(): %s\n\n", str);
//     return 0;
// }