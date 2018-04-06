
#include "eval_expr.h"

int		donum(char **xpr)
{
	int nbr
	
	while (**xpr == ' ')
	{
		(*xpr)++;
	}
	if (**xpr == '(')
	{
		(*xpr)++;
		nbr == dosum(xpr)
		if (**xpr == ')')
			(*xpr)++;
		return (nbr);
	}
	return (ft_atoi(xpr));
}

int doops(char **xpr)
{
	int nbr;
	int nbr2;
	char op;

	nbr = donum(xpr);
	while (**xpr)
	{	
		while (**xpr == ' ')
		{
			(*xpr)++;
		}
	op = **xpr;
	if (op != '/' && op != '*' && op != '%')
	{
		return (nbr);
	}
	(*xpr)++;
	nbr2 = donum(xpr);
	if (op == '*')
		nbr *= nbr2;
	if (op == '/')
		nbr /= nbr2;
	if (op == '%')
		nbr %= nbr2;
	}
	return (nbr)
}
int	dosum(char **xpr)
{
	int nbr;
	int nbr2;
	char op;

	while (**xpr)
	{
		nbr = doops(xpr)
		while (**xpr == ' ')
		{
		(*xpr)++;
		}
	op = **xpr;
	if (op != '+' && op != '-')
		return (nbr)
	}
	(*xpr)++;
	nbr2 = doops(xpr);
	if (op == '+')
	{
		nbr += nbr2;
	}
	else
	{
		nbr -= nbr2;
	}
	return(nbr)
}
int	eval_expr(char *xpr)
{
	return(dosum(&xpr))
}