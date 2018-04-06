/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:45:47 by rastle            #+#    #+#             */
/*   Updated: 2018/04/01 20:46:49 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int neg;

	neg = 1;
	if (nb < 0)
	{
		neg = -1;
	}
	if (nb / 10 == 0)
	{
		if (neg == -1)
			ft_putchar('-');
		ft_putchar((nb * neg) + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(((nb % 10) * neg) + '0');
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
