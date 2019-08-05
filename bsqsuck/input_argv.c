/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:17:52 by clorene           #+#    #+#             */
/*   Updated: 2019/07/25 14:41:02 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUFF_SIZE	1000

int		*output_coords(char *buf)
{
	int	i;
	int	*coords;
	int	k;

	i = 0;
	k = i;
	coords = malloc(sizeof(int) * BUFF_SIZE);
	while (buf[i] != '\n')
	{
		i++;
	}
	while (buf[k] >= '0' && buf[k] <= '9' && buf[k] != buf[i - 3])
	{
		coords[0] = coords[0] * 10 + (buf[k] - 48);
		k++;
	}
	coords[1] = buf[k + 2];
	coords[2] = buf[k + 1];
	coords[3] = buf[k];
	return (coords);
}

int		get_linelen(char *file_name)
{
	int		fd;
	int		len;
	char	c;

	fd = open(file_name, O_RDWR);
	c = 0;
	len = 0;
	while (c != '\n')
		read(fd, &c, 1);
	read(fd, &c, 1);
	while (c != '\n')
	{
		read(fd, &c, 1);
		len++;
	}
	return (len);
}

int		*input_argv(char *file_name)
{
	char	buf[BUFF_SIZE];
	int		*coords;
	int		ret;
	int		fd;

	fd = open(file_name, O_RDWR);
	ret = read(fd, buf, BUFF_SIZE);
	if (check_first_line(buf) == 0)
	{
		return (0);
	}
	coords = output_coords(buf);
	close(fd);
	coords[4] = get_linelen(file_name);
	return (coords);
}
