# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 15:45:51 by rastle            #+#    #+#              #
#    Updated: 2018/04/01 23:04:08 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

CFLAGS = -Wall -Wextra -Werror

SRC = eval_expr.c tools.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(wildcard *.o)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
