/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:13:38 by clorene           #+#    #+#             */
/*   Updated: 2019/07/08 22:12:47 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_massiv(char re_int_massive[], int i_massiv, int nb, int neg)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (i_massiv >= 0)
	{
		ft_putchar(re_int_massive[i_massiv]);
		i_massiv--;
	}
	if (nb < 0)
	{
		ft_putchar('0' - neg);
	}
}

void	ft_putnbr(int nb)
{
	int		i_massiv;
	int		mod_nbrs;
	int		neg;
	char	re_int_massive[11];

	mod_nbrs = nb;
	i_massiv = 0;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb < 0)
	{
		neg = nb % 10;
		mod_nbrs = nb / 10;
		mod_nbrs = mod_nbrs * (-1);
	}
	while (mod_nbrs > 0)
	{
		re_int_massive[i_massiv] = (mod_nbrs % 10) + 0x30;
		mod_nbrs = mod_nbrs / 10;
		i_massiv++;
	}
	ft_print_massiv(re_int_massive, i_massiv, nb, neg);
}
