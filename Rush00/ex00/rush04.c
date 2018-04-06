/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 19:26:28 by malves-b          #+#    #+#             */
/*   Updated: 2018/03/18 19:48:40 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int width;
	int height;

	width = x;
	height = y;
	y = 1;
	while (y <= height && width > 0)
	{
		x = 1;
		while (x <= width)
		{
			if ((x == 1 && y == 1) || (x == width && y == height))
				ft_putchar('A');
			else if ((x == 1 && y == height) || (x == width && y == 1))
				ft_putchar('C');
			else if ((x > 1 && x < width && y > 1 && y < height))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
