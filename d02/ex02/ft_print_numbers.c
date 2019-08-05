/* i************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 07:33:50 by clorene           #+#    #+#             */
/*   Updated: 2019/07/04 08:23:21 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	int		i;
	int		numbers;

	numbers = '0';
	while (i <= 9)
	{
		ft_putchar(numbers);
		numbers++;
		i++;
	}
	ft_putchar('\n');
}
