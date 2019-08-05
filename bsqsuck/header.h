/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdebbie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:52:22 by bdebbie           #+#    #+#             */
/*   Updated: 2019/07/25 10:08:00 by clorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

void				ft_putstr(char *str);
int					ft_atoi(char **map, int *symbl);
int					check_first_line(char *buf);
char				**open_file(char *file_name);
int					*input_argv(char *file_name);
int					*find_square(char **map, int *syms);
void				print_sq(int *coords, char **array);
char				**stdion_read();
int					*input_stdin(char **map);

#endif
