/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 12:14:56 by clorene           #+#    #+#             */
/*   Updated: 2019/07/07 17:36:57 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int a;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	a = ft_recursive_factorial(nb - 1) * nb;
	return (a);
}

int main()
{
	int nb = 3;
	printf("%d", ft_recursive_factorial(nb));
	return(0);
}
