# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:05:45 by idelgado          #+#    #+#              #
#    Updated: 2020/08/06 10:01:20 by idelgado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SRC = *.c

SRC_OP1 = 	ft_atoi.c  	 \
			ft_bzero.c 	 \
			ft_calloc.c  \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memchr.c  \
			ft_memcmp.c  \
			ft_memcpy.c  \
			ft_memmove.c \
			ft_memset.c  \
			ft_strchr.c  \
			ft_strdup.c  \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c  \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			
CFLAGS = -Wall -Wextra -Werror
LIBNAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c $(SRC_OP1)
	ar rc $(LIBNAME) *.o
	ranlib $(LIBNAME)
clean:
	rm -f *.o

fclean: clean
	rm -f *.a
re: fclean all

.PHONY: all clean fclean re