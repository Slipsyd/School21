/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:42:21 by clorene           #+#    #+#             */
/*   Updated: 2019/07/05 19:55:00 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	int a1;
	int b1;

	a1 = *a;
	b1 = *b;
	div = a1 / b1;
	mod = a1 % b1;
	*a = div;
	*b = mod;
}
