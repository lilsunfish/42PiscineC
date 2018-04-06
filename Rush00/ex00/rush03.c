/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 13:45:54 by malves-b          #+#    #+#             */
/*   Updated: 2018/03/18 19:34:01 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		height;
	int		width;

	width = x;
	height = y;
	y = 1;
	while (y <= height && width > 0)
	{
		x = 1;
		while (x <= width)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == height))
				ft_putchar('A');
			else if (x > 1 && x < width && y > 1 && y < height)
				ft_putchar(' ');
			else if ((x == width && y == 1) || (x == width && y == height))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
