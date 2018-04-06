/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:28:49 by rastle            #+#    #+#             */
/*   Updated: 2018/03/29 15:27:21 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void		ft_display_file(char *file)
{
	int		fd;
	int		r;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		return ;
	}
	while ((r = read(fd, buf, BUF_SIZE)) > 0)
	{
		write(1, buf, r);
	}
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments\n", 19);
	}
	if (argc == 1 || argc > 2)
	{
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
