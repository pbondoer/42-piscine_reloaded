# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 07:47:35 by lemon             #+#    #+#              #
#    Updated: 2016/11/23 07:47:37 by lemon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ft_display_file: main.o
	gcc -Wall -Wextra -Werror main.o -o ft_display_file

main.o: main.c
	gcc -Wall -Wextra -Werror -c main.c -o main.o

.PHONY: all clean fclean re

all: ft_display_file

clean:
	rm -f main.o

fclean: clean
	rm -f ft_display_file

re: fclean all
