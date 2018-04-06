/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 14:27:09 by rastle            #+#    #+#             */
/*   Updated: 2018/04/04 22:02:04 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include <unistd.h>

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

int		ft_atoi(char **str)
{
	int	nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9')
	{
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr);
}
