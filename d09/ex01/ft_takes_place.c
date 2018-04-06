/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:52:07 by rastle            #+#    #+#             */
/*   Updated: 2018/03/22 20:10:10 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	char	m;
	char	p;
	int		lh;

	m = 'A';
	p = m;
	if (hour > 11)
		m = 'P';
	if (hour == 12)
		p = 'P';
	if (hour == 0)
		p = 'A';
	if (hour == 0)
		hour = 12;
	else if (hour > 12)
		hour = hour - 12;
	if (hour != 12)
		lh = hour + 1;
	else
		lh = 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.",
			hour, m, lh, p);
	printf("%c", '\n');
}

int		main(void)
{
	ft_takes_place(00);
	return (0);
}
