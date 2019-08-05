/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 06:51:29 by clorene           #+#    #+#             */
/*   Updated: 2019/07/04 07:22:14 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	symbol;

	symbol = 'z';
	while (i < 26)
	{
		ft_putchar(symbol);
		symbol--;
		i++;
	}
	write(1, "\n", 1);
}
