/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:33:21 by clorene           #+#    #+#             */
/*   Updated: 2019/07/10 20:16:51 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i_massiv;
	int		i;
	int		iargc;
	char	*str;

	iargc = argc;
	i = 1;
	argc = 0;
	i_massiv = 0;
	while (iargc > i)
	{
		str = argv[argc + 1];
		argc++;
		while (str[i_massiv] != '\0')
		{
			ft_putchar(str[i_massiv]);
			i_massiv++;
		}
		i_massiv = 0;
		i++;
		ft_putchar('\n');
	}
}
