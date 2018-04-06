/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:16:38 by rastle            #+#    #+#             */
/*   Updated: 2018/03/28 16:12:25 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*prev;
	int		i;

	i = 1;
	prev = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = prev;
		prev = new;
		i++;
	}
	return (prev);
}
