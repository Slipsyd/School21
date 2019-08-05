/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdebbie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:16:34 by bdebbie           #+#    #+#             */
/*   Updated: 2019/07/25 06:26:40 by bdebbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*create_elem(char data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

char	**get_array(int lines, int syms, t_list *begin)
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
	return (&array[1]);
}

char	**read_file(int fd)
{
	int		lines;
	int		length;
	t_list	*list;
	t_list	*begin;
	char	c;

	length = 0;
	lines = 0;
	list = create_elem(0);
	begin = list;
	if (fd < 0)
		return (0);
	while (read(fd, &c, 1))
	{
		list->data = c;
		list->next = create_elem(0);
		list = list->next;
		if (c == '\n')
			lines++;
		length++;
	}
	close(fd);
	return (get_array(lines, (length - lines) / lines, begin));
}

char	**open_file(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDWR);
	return (read_file(fd));
}
