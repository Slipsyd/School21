/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:29:05 by clorene           #+#    #+#             */
/*   Updated: 2019/07/07 17:31:33 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		ft_iterative_factorial(int nb)
{
	int i;
	int a;
	int check;

	check = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (check > a)
	{
		a++;
		i++;
		nb = nb * i;
	}
	return (nb);
}
int main()
{
	int nb = 5;
	printf("%d", ft_iterative_factorial(nb));
	return(0);
}
