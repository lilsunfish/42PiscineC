/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 22:23:28 by rastle            #+#    #+#             */
/*   Updated: 2018/03/25 17:24:43 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
	{
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (match(s1, s2 + 1));
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (match(s1 + 1, s2 + 1));
	}
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (0);
}