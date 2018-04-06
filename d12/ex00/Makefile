# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 19:01:33 by rastle            #+#    #+#              #
#    Updated: 2018/03/29 12:32:09 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(wildcard *.o)

fclean: clean
	/bin/rm -f $(NAME)
