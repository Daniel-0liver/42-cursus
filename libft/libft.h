#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>

// Is functions
int	ft_isalpha(int);
int	ft_isalnum(int);
int ft_isascii(int);
int	ft_isdigit(int);
int ft_isascii(int);
int ft_isprint(int);

// Memory Functions
void *ft_memset(void*, int, size_t);
void ft_bzero(void*, size_t);
void *ft_memcpy(void*, const void*, size_t);
void *ft_memmove(void*, const void*, size_t);

// String manipulation funcios
size_t ft_strlen(const char*);

#endif