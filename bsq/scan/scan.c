/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:25:18 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/19 16:33:31 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scan.h"

void	scan_table(t_bscu *bsq)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < bsq[0].line)
	{
		while (x < bsq[0].col - 1)
		{
			if (bsq[0].map[y][x] != bsq[0].obstacle)
			{
				scan_case(&bsq[0], x, y);
			}
			x++;
		}
		x = 0;
		y++;
	}
}

void	scan_case(t_bscu *bsq, unsigned int x, unsigned int y)
{
	unsigned int	i;
	unsigned int	j;
	char			check;

	check = 0;
	i = 0;
	while (check == 0)
	{
		j = x + i + 1;
		while (j > x)
			if (bsq[0].map[y + i][--j] == bsq[0].obstacle)
				check++;
		j = y + i + 1;
		while (j > y)
			if (bsq[0].map[--j][x + i] == bsq[0].obstacle) 
				check++;
		if (check == 0)
			i++;
		if ((i + x > bsq[0].col - 2) || (i + y > bsq[0].line - 1))
		{	
			check = 1; 
		}
	}
	if (check > 0)
		b_cube(&bsq[0], x, y, i);
}

void	b_cube(t_bscu *bsq, unsigned int x, unsigned int y, unsigned int size)
{
	if (size > bsq[0].carre.size)
	{
		bsq[0].carre.x = x;
		bsq[0].carre.y = y;
		bsq[0].carre.size = size;
	}
	return ;
}
