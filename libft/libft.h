#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

// Part I
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
void *ft_memchr(const void*, int, size_t);
int ft_memcmp(const void*, const void*, size_t);
void *ft_calloc(size_t, size_t);
char *ft_strdup(const char*);

// String manipulation funcios
size_t ft_strlen(const char*);
size_t ft_strlcpy(char*, const char*, size_t);
size_t ft_strlcat(char*, const char*, size_t);
int ft_toupper(int);
int ft_tolower(int);
char *ft_strchr(const char*, int);
char *ft_strrchr(const char*, int);
int ft_strncmp(const char*, const char*, size_t);
char *ft_strnstr(const char *, const char*, size_t);
int	ft_atoi(const char*);

// Part II
char *ft_substr(char const*, unsigned int, size_t);
char *ft_strjoin(char const*, char const*);
char *ft_strtrim(char const*, char const*);

#endif