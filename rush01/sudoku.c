/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:32:28 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 22:20:18 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	update_case(char str[SIZE][SIZE], int x, int y)
{
	int		r;
	char	try;

	try = 1 + 48;
	r = set_cursor(str, &x, &y);
	while (r == FAIL)
	{
		if (try >= 58)
		{
			str[y][x] = '.';
			return (FAIL);
		}
		if ((check_x(str, y, try) == SUCCES && check_y(str, x, try) == SUCCES)
				&& check_bloc(str, x, y, try) == SUCCES)
		{
			str[y][x] = try;
			r = update_case(str, x, y);
		}
		try += 1;
	}
	return (SUCCES);
}

char	set_cursor(char str[SIZE][SIZE], int *x, int *y)
{
	while (*y < 9)
	{
		while (*x < 9)
		{
			if (str[*y][*x] == '.')
				return (FAIL);
			*x += 1;
		}
		*x = 0;
		*y += 1;
	}
	return (SUCCES);
}
