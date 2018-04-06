/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:51:39 by rastle            #+#    #+#             */
/*   Updated: 2018/03/28 22:27:47 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *a;
	t_list *i;

	a = *begin_list;
	while (a)
	{
		i = a->next;
		free(a);
		a = i;
	}
	*begin_list = NULL;
}
