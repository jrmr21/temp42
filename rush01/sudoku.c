/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:32:28 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 20:17:39 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	update_case(char str[SIZE][SIZE], int x, int y)
{
	int 	r;
	char 	try;

	try = 1 + 48;
	r = set_cursor(str, &x, &y);
	while(r == FAIL)
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
	while ( *y < 9)
	{
		while ( *x < 9)
		{
			if(str[*y][*x] == '.')
				return (FAIL);
			*x += 1;
		}
		*x = 0;
		*y += 1;
	}
	return (SUCCES);
}

char check_y(char str[SIZE][SIZE], int y, char a)
{
	int i;

	i = -1;
	while ( i < SIZE-1)
	{
		if(str[++i][y] == a)
			return (FAIL);
	}
	return(SUCCES);
}

char    check_bloc(char str[SIZE][SIZE], int x, int y, char a)
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
		if(str[x][i] == a)
		{
			return (FAIL);
		}
		i++;
	}
	return (SUCCES);
}
char    update_case2(char str[SIZE][SIZE], int x, int y)
{
	int     r;
	char    try;

	try = 1 + 48;
	r = set_cursor(str, &x, &y);
	while(r == FAIL)
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
