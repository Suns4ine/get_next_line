/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:33:27 by madan             #+#    #+#             */
/*   Updated: 2019/11/12 14:23:12 by madan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# define BUFF_SIZE 30

typedef struct				s_gnl
{
	int						fd;
	char					*rest;
	struct s_gnl			*next;
}							t_gnl;
int							get_next_line(const int fd, char **line);
#endif
