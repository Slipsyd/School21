/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 20:29:00 by clorene           #+#    #+#             */
/*   Updated: 2019/07/07 20:32:04 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, char a, char b, char c)
{
	int i;

	i = 0;
	if (x > 0)
	{
		ft_putchar(a);
	}
	while (i < x - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (y > 0)
	{
		ft_line(x, 'A', 'B', 'A');
		while (i < y - 2)
		{
			ft_line(x, 'B', ' ', 'B');
			i++;
		}
		if (y > 1)
		{
			ft_line(x, 'C', 'B', 'C');
		}
	}
}
