/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:16:20 by malves-b          #+#    #+#             */
/*   Updated: 2018/03/18 18:16:24 by malves-b         ###   ########.fr       */
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
				ft_putchar('/');
			else if ((x == width && y == 1) || (x == 1 && y == height))
				ft_putchar('\\');
			else if ((x > 1 && x < width && y > 1 && y < height))
				ft_putchar(' ');
			else
				ft_putchar('*');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
