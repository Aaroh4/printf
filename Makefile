# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 12:44:31 by ahamalai          #+#    #+#              #
#    Updated: 2023/11/21 13:00:57 by ahamalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printhex.c

LIBFTDIR = ./libft

LIBFT = $(LIBFTDIR)\libft.a

OBJ = $(SRC:.c=.o)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFTDIR)
	ar -rcs $(NAME) $(OBJ)

.PHONY: all clean fclean re
