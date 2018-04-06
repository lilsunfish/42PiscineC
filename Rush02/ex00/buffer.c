/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:54:22 by rastle            #+#    #+#             */
/*   Updated: 2018/04/01 21:43:44 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	std_input(void)
{
	char	*buf;
	char	ptr[1];
	int		size;
	int		num;
	int		i;

	i = 0;
	size = 32000;
	*ptr = '\0';
	buf = (char*)malloc(sizeof(char) * size + 1);
	while ((num = read(0, ptr, 1)))
	{
		buf[i] = *ptr;
		i++;
	}
	buf[i] = '\0';
	detect(buf, ft_strlen(buf));
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std_input();
	if (argc > 1)
		argv++;
	return (0);
}
