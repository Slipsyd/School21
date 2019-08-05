/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useless_core.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdebbie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:03:46 by bdebbie           #+#    #+#             */
/*   Updated: 2019/07/24 20:23:37 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_sq(int step, int *coords, char **map, int *syms)
{
	int x;
	int y;

	y = coords[0];
	x = coords[1];
	while (y < step + coords[0])
	{
		while (x < step + coords[1])
		{
			if (y > syms[0] - 1 || map[y][x] == '\0' || map[y][x] == syms[2])
				return (-1);
			x++;
		}
		x = coords[1];
		y++;
	}
	return (step);
}

int		check_pos(int x, int y, char **map, int *syms)
{
	int step;
	int max;
	int curr;
	int coords[2];

	step = 0;
	max = 0;
	curr = 0;
	coords[0] = y;
	coords[1] = x;
	while (curr != -1)
	{
		curr = check_sq(step, coords, map, syms);
		if (curr > max)
			max = curr;
		step++;
	}
	return (max);
}

void	set_coord(int x, int y, int *coords, int curr)
{
	coords[0] = y;
	coords[1] = x;
	coords[2] = curr;
}

int		*find_square(char **map, int *syms)
{
	int x;
	int y;
	int curr;
	int max;
	int *coords;

	coords = malloc(sizeof(int) * 4);
	y = 0;
	curr = 0;
	max = 0;
	while (y++ < syms[0])
	{
		x = 0;
		while (x < syms[4])
		{
			curr = check_pos(x++, y - 1, map, syms);
			if (curr > max)
			{
				max = curr;
				set_coord(x - 1, y - 1, coords, curr);
			}
		}
	}
	coords[4] = syms[1];
	return (coords);
}

void	print_sq(int *coords, char **array)
{
	int x;
	int y;

	y = coords[0];
	x = coords[1];
	while (y < coords[2] + coords[0])
	{
		while (x < coords[2] + coords[1])
		{
			array[y][x] = coords[4];
			x++;
		}
		x = coords[1];
		y++;
	}
}
