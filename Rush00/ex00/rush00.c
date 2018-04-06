/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 15:23:25 by malves-b          #+#    #+#             */
/*   Updated: 2018/03/31 15:14:32 by rastle           ###   ########.fr       */
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
			if ((x == 1 && y == 1) || (x == 1 && y == height)
				|| (x == width && y == 1) || (x == width && y == height))
				ft_putchar('o');
			else if (x > 1 && x < width && y > 1 && y < height)
				ft_putchar(' ');
			else if ((x > 1 && y == height) || (x > 1 && y == 1))
				ft_putchar('-');
			else
				ft_putchar('|');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
