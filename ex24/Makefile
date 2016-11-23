# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 07:39:43 by lemon             #+#    #+#              #
#    Updated: 2016/11/23 07:41:46 by lemon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES =	./includes

OBJ =		srcs/ft_putchar.o \
			srcs/ft_putstr.o \
			srcs/ft_strcmp.o \
			srcs/ft_strlen.o \
			srcs/ft_swap.o

libft.a: $(OBJ)
	ar -rcs libft -I $(INCLUDES) $(OBJ) -o libft.a

%.o: %.c
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -o $@ -c $<

.PHONY: all clean fclean re

all: libft.a

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean all
