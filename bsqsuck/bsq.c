/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdebbie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:49:02 by bdebbie           #+#    #+#             */
/*   Updated: 2019/07/25 14:37:05 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	explore_map(char *file_name)
{
	char	**map;
	int		*syms;
	int		*coords;
	int		i;

	i = 0;
	map = open_file(file_name);
	if ((syms = input_argv(file_name)) == 0 || ft_atoi(map, syms) == 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	coords = find_square(map, syms);
	print_sq(coords, map);
	while (map[i])
	{
		write(1, map[i], syms[4]);
		write(1, "\n", 1);
		i++;
	}
}

void	stdin_explore(void)
{
	char	**map;
	int		*syms;
	int		*coords;
	int		i;

	i = 0;
	map = stdion_read();
	if ((syms = input_stdin(map)) == 0 || ft_atoi(map, syms) == 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	coords = find_square(map, syms);
	print_sq(coords, map);
	while (map[i])
	{
		write(1, map[i], syms[4]);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		stdin_explore();
		return (0);
	}
	while (i < argc)
	{
		explore_map(argv[i]);
		i++;
		if (argc != i)
			write(1, "\n", 1);
	}
	return (0);
}
