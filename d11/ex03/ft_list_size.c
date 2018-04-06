/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:54:54 by rastle            #+#    #+#             */
/*   Updated: 2018/03/27 19:02:26 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int			c;
	t_list		*a;

	c = 0;
	a = begin_list;
	while (a)
	{
		c++;
		a = a->next;
	}
	return (c);
}