/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:28:46 by jtsai             #+#    #+#             */
/*   Updated: 2018/04/01 19:46:58 by jtsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIB_H
# define FTLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>

typedef struct	s_shape
{
	char		c[4];
	char		mid;
	char		side;
}				t_shape;

typedef struct	s_ch
{
	char		front;
	char		middle;
	char		end;
}				t_ch;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				check_valid(char *str, int rush, int w, int h);
void			detect(char *str, int size);

#endif
