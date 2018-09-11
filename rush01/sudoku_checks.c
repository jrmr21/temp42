/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:54:38 by bajouini          #+#    #+#             */
/*   Updated: 2018/09/09 21:20:56 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_checks.h"

char	check_y(char str[SIZE][SIZE], int y, char a)
{
	int i;

	i = -1;
	while (i < SIZE - 1)
	{
		if (str[++i][y] == a)
			return (FAIL);
	}
	return (SUCCES);
}

char	check_bloc(char str[SIZE][SIZE], int x, int y, char a)
{
	int x_max;
	int y_max;
	int x1;
	int y1;

	x_max = 3 * (x / 3) + 3;
	y_max = 3 * (y / 3) + 3;
	y1 = y_max - 3;
	while (y1 < y_max)
	{
		x1 = x_max - 3;
		while (x1 < x_max)
		{
			if (str[y1][x1] == a)
				return (FAIL);
			x1++;
		}
		y1++;
	}
	return (SUCCES);
}

char	check_x(char str[SIZE][SIZE], int x, char a)
{
	int i;

	i = 0;
	while (i < SIZE - 1)
	{
		if (str[x][i] == a)
		{
			return (FAIL);
		}
		i++;
	}
	return (SUCCES);
}
