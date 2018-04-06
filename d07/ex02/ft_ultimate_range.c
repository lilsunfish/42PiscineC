/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 11:06:41 by rastle            #+#    #+#             */
/*   Updated: 2018/03/23 13:13:45 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	*range = (int*)malloc(sizeof(**range) * (max - min));
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
