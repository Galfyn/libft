cmake_minimum_required(VERSION 3.19)
project(Libft C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Libft
        ft_atoi.c
        ft_bzero.c
        ft_calloc.c
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isdigit.c
        ft_islower.c
        ft_isnotprint.c
        ft_isprint.c
        ft_isspace.c
        ft_isupper.c
        ft_memccpy.c
        ft_memchr.c
        ft_memcmp.c
        ft_memcpy.c
        ft_memmove.c
        ft_memrchr.c
        ft_memset.c
        ft_putchar.c
        ft_putchar_fd.c
        ft_putnbr_fd.c
        ft_putstr_fd.c
        ft_strchr.c
        ft_strdup.c
        ft_strjoin.c
        ft_strlcat.c
        ft_strlcpy.c
        ft_strlen.c
        ft_strmapi.c
        ft_strncmp.c
        ft_strnstr.c
        ft_strrchr.c
        ft_strtrim.c
        ft_substr.c
        ft_tolower.c
        ft_toupper.c
        ft_split.c
        libft.h
        main.c)
