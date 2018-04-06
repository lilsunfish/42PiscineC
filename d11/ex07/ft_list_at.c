/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:21:29 by rastle            #+#    #+#             */
/*   Updated: 2018/03/27 22:42:45 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*a;
	unsigned int		i;

	a = begin_list;
	i = 0;
	if (!a)
		return (0);
	while (i != nbr)
	{
		if (!a->next)
			return (0);
		a = a->next;
		i++;
	}
	return (a);
}
