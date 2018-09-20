/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:03:19 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 21:38:56 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

void	ft_open_files(char *argv, t_bscu *bsq)
{
	int		fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		bsq[0].valid = -1;
		return ;
	}
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
	while (read(fd, &buf, 1) && bsq[0].valid != -1 && bsq[0].map[i] != NULL)
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
	while (read(fd, &buf, 1) && str != NULL)
	{
		str[i] = buf;
		str = ft_realloc(str, 1);
		if (buf == '\n' || buf == '\0')
			break ;
		i++;
	}
	verif_first_line(&bsq[0], str, i);
	bsq[0].map = (char**)malloc(sizeof(char*) * (bsq[0].line + 1));
	if (bsq[0].map != NULL)
		bsq[0].map[0] = (char*)malloc(sizeof(char) + 1);
	bsq[0].nb_obstacle = 0;
}
