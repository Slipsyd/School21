/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 12:54:50 by clorene           #+#    #+#             */
/*   Updated: 2019/07/07 17:41:14 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0 || nb == 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > i)
	{
		i++;
		nb = nb * nb;
	}
	return (nb);
}

int main()
{
	int power = 2;
	int nb = 5;
	printf("%d", ft_iterative_power(nb, power));
	return(0);
}
