/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:03:55 by clorene           #+#    #+#             */
/*   Updated: 2019/07/18 19:07:11 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_list.h"

#define BUFFER_SIZE		100

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUFFER_SIZE + 1];

	if (argc > 2)
	{
		ft_putstrerr("Too many arguments.");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstrerr("File name missing.");
		return (1);
	}
	ret = read(fd, buf, BUFFER_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUFFER_SIZE);
	}
	close(fd);
	return (0);
}
