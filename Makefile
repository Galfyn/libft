# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/18 22:14:35 by galfyn            #+#    #+#              #
#    Updated: 2021/04/22 20:28:18 by galfyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_memset.c		ft_bzero.c		ft_memcpy.c		\
		ft_memccpy.c	ft_memmove.c	ft_memchr.c		\
		ft_memcmp.c		ft_strlen.c		ft_isalpha.c	\
		ft_isdigit.c	ft_isalnum.c	ft_islower.c	\
		ft_isupper.c	ft_isprint.c	ft_isnotprint.c	\
		ft_isascii.c	ft_toupper.c	ft_tolower.c	\
		ft_strchr.c		ft_memrchr.c	ft_strrchr.c	\
		ft_strncmp.c	ft_strlcpy.c	ft_strlcat.c	\
		ft_putnbr.c		ft_putchar.c	ft_atoi.c		\
		ft_isspace.c	ft_calloc.c		ft_strnstr.c	\


SRC_BONUS = \

OBJ = $(patsubst %.c,%.o,$(SRC))
OBJ_BONUS = $(patsubst %.c,%.o,$(SRC_BONUS))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : clean fclean re all