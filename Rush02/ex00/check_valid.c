/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 14:05:49 by jtsai             #+#    #+#             */
/*   Updated: 2018/04/01 19:53:00 by jtsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

t_shape	*which_rush(int rush)
{
	t_shape *box;
	int		i;

	box = (t_shape *)malloc(sizeof(t_shape));
	i = -1;
	while (++i < 4)
	{
		if (rush == 0)
			box->c[i] = 'o';
		else if (rush == 1)
			box->c[i] = ((i == 0 || i == 3) ? '/' : '\\');
		else if (i > 0)
			box->c[i] = ((i == rush - 1) ? 'A' : 'C');
		else
			box->c[i] = 'A';
	}
	box->mid = (rush == 1) ? '*' : 'B';
	box->side = box->mid;
	if (rush == 0)
	{
		box->mid = '-';
		box->side = '|';
	}
	return (box);
}

t_ch	*chara(int n, t_shape *box)
{
	t_ch	*ch;

	ch = (t_ch *)malloc(sizeof(t_ch));
	if (n == 1)
	{
		ch->front = box->c[0];
		ch->middle = box->mid;
		ch->end = box->c[1];
	}
	else if (n == 2)
	{
		ch->front = box->side;
		ch->middle = ' ';
		ch->end = box->side;
	}
	else if (n == 3)
	{
		ch->front = box->c[2];
		ch->middle = box->mid;
		ch->end = box->c[3];
	}
	return (ch);
}

int		compare(int n, t_shape *box, char *str, int w)
{
	int		middlepart;
	int		i;
	t_ch	*ch;

	ch = chara(n, box);
	middlepart = w - 2;
	i = 0;
	if (str[i] == '\n')
		i++;
	if (str[i++] != ch->front)
		return (0);
	while (middlepart-- > 0)
	{
		if (str[i++] != ch->middle)
			return (0);
	}
	if (w >= 2)
	{
		if (str[i++] != ch->end)
			return (0);
	}
	free(ch);
	return (1);
}

int		check_valid(char *str, int rush, int w, int h)
{
	int		rows;
	t_shape	*box;
	int		mark;

	box = which_rush(rush);
	rows = h + 1;
	mark = 1;
	while (--rows > 0)
	{
		if (rows == h)
			mark = compare(1, box, str, w);
		else if (rows != 1)
			mark = compare(2, box, str, w);
		else if (rows == 1)
			mark = compare(3, box, str, w);
		if (mark == 0)
			return (0);
		if (str[w] != '\n')
			return (0);
		str += (w + 1);
	}
	free(box);
	return (1);
}
