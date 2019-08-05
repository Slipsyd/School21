/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:05:23 by clorene           #+#    #+#             */
/*   Updated: 2019/07/25 14:41:44 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_first_line(char *buf)
{
	int i;

	i = 0;
	while (buf[i] != '\n')
	{
		if (buf[i] == ' ' || buf[i] == '\n' || buf[i] == '\t' ||
					buf[i] == '\v' || buf[i] == '\f' || buf[i] == '\r')
		{
			return (0);
		}
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			if (buf[i - 1] == '-')
			{
				return (0);
			}
		}
		i++;
	}
	if (buf[i - 4] < '0' || buf[i - 4] > '9')
	{
		return (0);
	}
	return (1);
}

int		ft_atoi(char **map, int *symbl)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (symbl[0] > k)
	{
		while (map[k][i] != '\0')
		{
			if (map[k][i] != symbl[2] && map[k][i] != symbl[3])
			{
				return (0);
			}
			i++;
		}
		if (i != symbl[4])
		{
			return (0);
		}
		k++;
		i = 0;
	}
	return (1);
}
