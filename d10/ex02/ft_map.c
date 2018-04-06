/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:54:15 by rastle            #+#    #+#             */
/*   Updated: 2018/03/26 22:41:11 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *out;

	i = 0;
	out = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
