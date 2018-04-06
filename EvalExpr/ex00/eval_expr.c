
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 14:27:25 by rastle            #+#    #+#             */
/*   Updated: 2018/04/01 18:05:26 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int			donum(char **xpr)
{
	int		nbr;

	while (**xpr == ' ')
		(*xpr)++;
	if (**xpr == '(')
	{
		(*xpr)++;
		nbr = dosum(xpr);
		if (**xpr == ')')
			(*xpr)++;
		return (nbr);
	}
	return (ft_atoi(xpr));
}

int			doops(char **xpr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = donum(xpr);
	while (**xpr)
	{
		while (**xpr == ' ')
			(*xpr)++;
		op = **xpr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*xpr)++;
		nbr2 = donum(xpr);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int			dosum(char **xpr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = doops(xpr);
	while (**xpr)
	{
		while (**xpr == ' ')
			(*xpr)++;
		op = **xpr;
		if (op != '+' && op != '-')
			return (nbr);
		(*xpr)++;
		nbr2 = doops(xpr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int			eval_expr(char *xpr)
{
	return (dosum(&xpr));
}

int			main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
