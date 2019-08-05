/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 18:36:17 by clorene           #+#    #+#             */
/*   Updated: 2019/07/09 21:04:04 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check_cut(char *str, char *to_find, int i, int n, 
		char output, int check_i)
{
	while (str[i] != to_find[n])
	{
		i++;
	}
	output[check_i] = str[i];
	n++;
	check_i++;
	if (output != *to_find)
		return (ft_check_cut, *str, *to_find, i, n, output, check_i);
	if (output == to_found)
		return (str, i);
}	
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	int check_i;	
	char output[] = {0};

	i = 0;
	n = 0;
	check_i = 0;
	ft_check_cut(str, to_find, i, n, output, check_i);
	i = i - n;
	return (&str[i]);		
}
