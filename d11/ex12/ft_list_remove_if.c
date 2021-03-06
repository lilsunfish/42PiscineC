/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:26:01 by rastle            #+#    #+#             */
/*   Updated: 2018/03/28 23:08:02 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{

	t_list *now;
	t_list *after;
	
	now = *begin_list;

	while (now)
	{
		if ((*cmp)(now->data, data_ref) == 0)
		{
			after = now->next;
			free(now);
			prev->next = after;
			now = after;
		}	
		else
		{
			now = now->next;
		}
	}
}
