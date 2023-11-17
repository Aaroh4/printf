# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 12:44:31 by ahamalai          #+#    #+#              #
#    Updated: 2023/11/17 13:37:19 by ahamalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_print_unsigned.c ft_printhex.c ft_printnbr.c

OBJ = $(SRC:.c=.o)

HEADERS = ./includes

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@ -I $(HEADERS)

$(NAME): $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

libftprintf.a: $(OBJ)
	ar -rc libftprintf.a $(OBJ)

.PHONY: all clean fclean re
