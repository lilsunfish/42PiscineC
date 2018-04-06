/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 09:51:45 by jtsai             #+#    #+#             */
/*   Updated: 2018/04/01 21:50:28 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	print_all(void)
{
	ft_putstr("[rush-02] [1] [1] || [rush-03] [1] [1] ||");
	ft_putstr(" [rush-04] [1] [1]");
}

int		printresult(int rush, int width, int hight, char *str)
{
	int		v;
	char	*s;

	s = str;
	v = check_valid(s, rush, width, hight);
	if (v == 0)
	{
		ft_putstr("aucune");
		return (0);
	}
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(hight);
	ft_putstr("]");
	return (1);
}

void	detect_234(char *str, int size, int i, int h)
{
	if (h == 1 && i == 1)
		print_all();
	else if (str[size - 2] == 'A')
	{
		if (h == 1 || i == 1)
			printresult((h == 1 ? 2 : 3), i, h, str);
		else
			printresult(4, i, h, str);
	}
	else if (str[size - 2] == 'C')
	{
		if (h == 1 || i == 1)
		{
			if (printresult((i == 1 ? 2 : 3), i, h, str) == 1)
			{
				ft_putstr(" || ");
				printresult(4, i, h, str);
			}
		}
		else if (str[i - 1] == 'A' || str[i - 1] == 'C')
			printresult((str[i - 1] == 'A' ? 2 : 3), i, h, str);
	}
	else
		ft_putstr("aucune");
}

void	detect(char *str, int size)
{
	int i;
	int h;

	if (size == 0)
	{
		ft_putstr("aucune\n");
		return ;
	}
	i = -1;
	h = 0;
	while (++i < size)
		if (str[i] == '\n')
			h++;
	i = 0;
	while (str[i] != '\n')
		i++;
	if (str[0] == 'o' || str[0] == '/')
		printresult((str[0] == 'o' ? 0 : 1), i, h, str);
	else if (str[0] == 'A')
		detect_234(str, size, i, h);
	else
		ft_putstr("aucune");
	ft_putchar('\n');
}
