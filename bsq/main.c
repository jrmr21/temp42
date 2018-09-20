/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:34:43 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 21:40:27 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/tools.h"
#include "read/read.h"
#include "scan/scan.h"

void	make_square(t_bscu *bsq)
{
	int i;
	int j;
	int i_end;
	int j_end;

	scan_table(&bsq[0]);
	i = bsq[0].carre.y - 1;
	i_end = i + bsq[0].carre.size;
	while (i++ < i_end)
	{
		j = bsq[0].carre.x;
		j_end = j + bsq[0].carre.size;
		while (j < j_end)
			bsq[0].map[i][j++] = bsq[0].full;
	}
}

void	display(t_bscu *bsq)
{
	int i;
	int j;

	if (bsq[0].valid == -1 || bsq[0].line == 0 || bsq[0].col == 1)
	{
		write(1, "map error\n", 10);
		return ;
	}
	make_square(&bsq[0]);
	i = 0;
	make_square(&bsq[0]);
	while (bsq[0].map[i])
	{
		j = 0;
		while (bsq[0].map[i][j] != '\0')
		{
			if (bsq[0].nb_obstacle == 0 && (bsq[0].map[i][j] != '\0' &&
					bsq[0].map[i][j] != '\n'))
				write(1, &bsq[0].full, 1);
			else
				write(1, &bsq[0].map[i][j], 1);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	t_bscu	bsq;
	int		i;

	bsq.valid = 0;
	i = 1;
	if (argc != 1)
	{
		while (i < argc)
		{
			bsq.valid = 0;
			ft_open_files(argv[i], &bsq);
			bsq.carre.size = 0;
			display(&bsq);
			i++;
			if (i < argc)
				write(1, "\n", 1);
		}
	}
	else
	{
		ft_read(0, &bsq);
		bsq.carre.size = 0;
		display(&bsq);
	}
	return (0);
}
