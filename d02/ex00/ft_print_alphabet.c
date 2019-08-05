/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 04:53:43 by clorene           #+#    #+#             */
/*   Updated: 2019/07/04 06:55:10 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	int		i;
	char	symbol;

	symbol = 'a';
	while (i < 26)
	{
		ft_putchar(symbol);
		symbol++;
		i++;
	}
	write(1, "\n", 1);
}