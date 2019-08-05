/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 05:04:26 by clorene           #+#    #+#             */
/*   Updated: 2019/07/25 10:08:14 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*create_elem_stdin(char data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

char	**stdinon_array(int lines, int syms, t_list *begin)
{
	char	**array;
	int		i;
	int		k;

	i = 0;
	k = 0;
	array = (char**)malloc(sizeof(char*) * lines);
	while (i < lines)
	{
		array[i] = (char*)malloc(sizeof(char) * syms + 1);
		while (begin->data != '\n')
		{
			array[i][k] = begin->data;
			begin = begin->next;
			k++;
		}
		begin = begin->next;
		array[i][k] = '\0';
		k = 0;
		i++;
	}
	return (array);
}

char	**stdion_read(void)
{
	int		lines;
	int		length;
	t_list	*list;
	t_list	*begin;
	char	c;

	length = 0;
	lines = 0;
	list = create_elem_stdin(0);
	begin = list;
	while (read(0, &c, 1))
	{
		list->data = c;
		list->next = create_elem_stdin(0);
		list = list->next;
		if (c == '\n')
			lines++;
		length++;
	}
	return (stdinon_array(lines, ((length - lines) / lines), begin));
}
