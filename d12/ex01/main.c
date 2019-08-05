/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:22:20 by clorene           #+#    #+#             */
/*   Updated: 2019/07/18 22:28:13 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "ft_list.h"

#define BUFFER_SIZE	30000

void	errno_put(void)
{
	if (errno == ENOENT)
		ft_putstrerr("No such file or directory");
	if (errno == EACCES)
		ft_putstrerr("Permission denid");
	if (errno == EISDIR)
		ft_putstrerr("Is a directory");
}

int		put_while(int i, char *buf)
{
	int ret;

	if (i == 1)
	{
		while (i == 1)
		{
			ret = read(0, buf, BUFFER_SIZE);
		}
	}
	return (0);
}

void	put_read(int fd, char *buf)
{
	int ret;

	ret = read(fd, buf, BUFFER_SIZE);
	buf[ret] = '\0';
	write(1, buf, ret);
	close(fd);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUFFER_SIZE + 1];

	i = argc;
	argc = 1;
	put_while(i, buf);
	while (i > argc)
	{
		fd = open(argv[argc], O_RDWR);
		if (fd == -1)
		{
			errno_put();
			write(1, "\n", 1);
		}
		else
		{
			put_read(fd, buf);
		}
		argc++;
	}
	return (0);
}
