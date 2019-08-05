/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdebbie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 07:33:08 by bdebbie           #+#    #+#             */
/*   Updated: 2019/07/25 08:25:51 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUFF_SIZE	1000

int		*output_coords_stdin(char *buf)
{
	int	i;
	int	*coords;
	int	k;

	i = 0;
	k = i;
	coords = malloc(sizeof(int) * BUFF_SIZE);
	while (buf[i] != '\0')
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

int		get_linelen_stdin(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		*input_stdin(char **map)
{
	int		*coords;

	coords = output_coords_stdin(map[0]);
	coords[4] = get_linelen_stdin(map[1]);
	return (coords);
}
