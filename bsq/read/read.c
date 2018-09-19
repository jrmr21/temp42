/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:03:19 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 03:09:22 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

#include <stdio.h>

void	display(t_bscu *bsq);

void	ft_open_files(int argc, char **argv)
{
	int		i;
	int		fd;
	t_bscu bsq;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd != -1)
		{
			ft_read(fd, &bsq);
			close(fd);
			bsq.carre.size = 0;
			display(&bsq);

			scan_table(&bsq);

			//printf("%i	%i	%i\n", bsq.carre.x, bsq.carre.y, bsq.carre.size);
			// On fait des truc..
		}
		i++;
	}
}

void	ft_read(int fd, t_bscu *bsq)
{
	int		i;
	int		j;
	char	buf;

	ft_read_first_line(&bsq[0], fd);
	i = 0;
	j = 0;
	bsq[0].col = 0;
	bsq[0].map = (char**)malloc(sizeof(char*) * (bsq[0].ligne + 1));
	bsq[0].map[0] = (char*)malloc(sizeof(char) + 1);
	while (read(fd, &buf, 1))
	{
		if (i == 0)
			bsq[0].col++;
		bsq[0].map[i][j] = buf;
		bsq[0].map[i] = ft_realloc(bsq[0].map[i], 1);
		j++;
		if (buf == '\n' || buf == '\0')
		{
			bsq[0].map[i][j] = '\0';
			j = 0;
			i++;
			bsq[0].map[i] = (char*)malloc(sizeof(char) + 1);
		}
	}
	bsq[0].map[i] = 0;
}

void	ft_read_first_line(t_bscu *bsq, int fd)
{
	char	*str;
	char	buf;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(char));
	while (read(fd, &buf, 1))
	{
		str[i] = buf;
		str = ft_realloc(str, 1);
		if (buf == '\n' || buf == '\0')
		{
			break ;
		}
		i++;
	}
	bsq[0].empty = str[i - 3];
	bsq[0].obstacle = str[i - 2];
	bsq[0].full = str[i - 1];
	str[i - 3] = '\0';
	bsq[0].ligne = ft_atoi(str);
}
