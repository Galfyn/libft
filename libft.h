#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void *ft_memset (void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *destination, const void *source, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove (void *dest, const void *src, size_t n);
void *ft_memchr (const void *arr, int c, size_t n);
int ft_memcmp (const void *arr1, const void *arr2, size_t n);
size_t ft_strlen(const char *s);
int ft_islower(int c);
int ft_isupper(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int	ft_isspace(int c);
int ft_isprint(int c);
int ft_isnotprint(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char *ft_strchr(const char *s, int c);
char *ft_strrchr (const char *str, int ch);
void *ft_memrchr (const void *arr, int c, size_t n);
int ft_strncmp(const char *str1, const char *str2, size_t n);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);








#endif