/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 10:40:32 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 19:02:43 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "verif.h"

int		verif_char(char buf, t_bscu *bsq)
{
	if (buf == bsq[0].obstacle)
		bsq[0].nb_obstacle++;
	if ((buf != bsq[0].empty && buf != bsq[0].obstacle) &&
			(buf != '\n' && buf != '\0'))
	{
		bsq[0].valid = -1;
		return (0);
	}
	return (1);
}

void	verif_col(t_bscu *bsq, int i, int j)
{
	if (i == 0)
		bsq[0].col = j;
	else if (bsq[0].col != j)
		bsq[0].valid = -1;
}

void	verif_line(t_bscu *bsq, int i)
{
	if (i != bsq[0].line)
		bsq[0].valid = -1;
}

void	verif_first_line(t_bscu *bsq, char *str, int i)
{
	bsq[0].empty = str[i - 3];
	bsq[0].obstacle = str[i - 2];
	bsq[0].full = str[i - 1];
	str[i - 3] = '\0';
	if (is_numeric(str) == 0)
		bsq[0].valid = -1;
	else
		bsq[0].line = ft_atoi(str);
}
