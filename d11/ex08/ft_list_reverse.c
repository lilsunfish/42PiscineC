/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:32:03 by rastle            #+#    #+#             */
/*   Updated: 2018/03/27 22:56:25 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = *begin_list;
	if (!a || !a->next)
		return ;
	b = a->next;
	c = b->next;
	a->next = 0;
	b->next = a;
	while (c)
	{
		a = b;
		b = c;
		c = c->next;
		b->next = a;
	}
	*begin_list = b;
}
