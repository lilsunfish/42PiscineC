/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 22:42:01 by rastle            #+#    #+#             */
/*   Updated: 2018/03/29 23:35:40 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 10

void		puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void		ft_display_file(char *file)
{
	int		fd;
	int		r;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("open() error");
		return (1);

	}
	while (r = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		write(1, buf, r);
	}
	close(fd);
}

int			main(int argc, char **argv)
{
	

}
