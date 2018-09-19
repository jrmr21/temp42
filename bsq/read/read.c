/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:03:19 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 16:32:47 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

void	ft_open_files(char *argv, t_bscu *bsq)
{
	int		fd;

	fd = open(argv, O_RDONLY);
	ft_read(fd, &bsq[0]);
	close(fd);
}

void	ft_read(int fd, t_bscu *bsq)
{
	int		i;
	int		j;
	char	buf;

	ft_read_first_line(&bsq[0], fd);
	i = 0;
	j = 0;
	while (read(fd, &buf, 1))
	{
		if (verif_char(buf, &bsq[0]) == 0)
			break ;
		bsq[0].map[i][j++] = buf;
		bsq[0].map[i] = ft_realloc(bsq[0].map[i], 1);
		if (buf == '\n' || buf == '\0')
		{
			verif_col(&bsq[0], i, j);
			bsq[0].map[i++][j] = '\0';
			j = 0;
			bsq[0].map[i] = (char*)malloc(sizeof(char) + 1);
		}
	}
	verif_line(&bsq[0], i);
	bsq[0].map[i] = 0;
}

void	ft_read_first_line(t_bscu *bsq, int fd)
{
	char	*str;
	char	buf;
	int		i;

	i = 0;
	bsq[0].col = 0;
	str = (char*)malloc(sizeof(char));
	while (read(fd, &buf, 1))
	{
		str[i] = buf;
		str = ft_realloc(str, 1);
		if (buf == '\n' || buf == '\0')
			break ;
		i++;
	}
	bsq[0].empty = str[i - 3];
	bsq[0].obstacle = str[i - 2];
	bsq[0].full = str[i - 1];
	str[i - 3] = '\0';
	bsq[0].line = ft_atoi(str);
	bsq[0].map = (char**)malloc(sizeof(char*) * (bsq[0].line + 1));
	bsq[0].map[0] = (char*)malloc(sizeof(char) + 1);
	bsq[0].nb_obstacle = 0;
}
