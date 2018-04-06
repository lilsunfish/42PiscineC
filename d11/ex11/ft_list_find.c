/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:08:42 by rastle            #+#    #+#             */
/*   Updated: 2018/03/28 15:11:11 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *a;

	a = begin_list;
	while (a)
	{
		if ((*cmp)(a->data, data_ref) == 0)
			return (a);
		a = a->next;
	}
	return (0);
}
