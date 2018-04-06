/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:49:56 by rastle            #+#    #+#             */
/*   Updated: 2018/03/23 13:57:24 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i > k && i < j))
		return (i);
	if ((j > k && j < i) || (j > i && j < k))
		return (j);
	return (k);
}