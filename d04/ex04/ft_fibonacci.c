/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:22:24 by clorene           #+#    #+#             */
/*   Updated: 2019/07/07 17:46:06 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int count_fibo;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	count_fibo = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (count_fibo);
}

int main()
{
	int index = 7;
	printf("%d", ft_fibonacci(index));
	return(0);
}
