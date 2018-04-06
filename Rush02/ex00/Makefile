# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 15:45:51 by rastle            #+#    #+#              #
#    Updated: 2018/04/01 20:59:54 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

CFLAGS = -Wall -Wextra -Werror

SRC = buffer.c detect.c tools.c check_valid.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(wildcard *.o)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all   
