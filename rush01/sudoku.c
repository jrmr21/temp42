/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:32:28 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 05:24:00 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define 	FAIL 1
#define		SIZE 9
#include 	<stdio.h>

char    check_x(char str[SIZE][SIZE], char x, char a);
char    check_y(char str[SIZE][SIZE], char y, char a);
char    check_bloc(char str[SIZE][SIZE], char x, char y, char a);
char    update_case(char str[SIZE][SIZE], char x, char y);
char	set_cursor(char str[SIZE][SIZE], char *x, char *y);

char	update_case(char str[SIZE][SIZE], char x, char y)
{
	char r;
	char try;

	try = 1 + 48;
	r = FAIL;
	r = set_cursor(str, &x, &y);
	while (r == FAIL)
	{
		if ((check_y(str, y, try) != FAIL) && 
				(check_x(str, x, try) != FAIL) &&
				(check_bloc(str, x, y, try) != FAIL) &&
				(try < 58))
		{
			str[y][x] = try;
			r = update_case(str, x, y);
		}
		else if (try > 57)
			return (FAIL);
		else
			try++;	
	}
	return (0);
}

char	set_cursor(char str[SIZE][SIZE], char *x, char *y)
{
	while (*y < SIZE - 1)
	{
		while (*x < SIZE -1)
		{
			if (str[*y][*x] == '.')
				return (FAIL);
			*x += 1;
		}
		*x = 0;
		*y += 1;
	}
	return (0);
}

char check_y(char str[SIZE][SIZE], char y, char a)
{
	char i = -1;

	while ( i++ < SIZE -1)	
		if(str[i][y] == a)
			return (FAIL);
	return(0);
}

char    check_bloc(char str[SIZE][SIZE], char x, char y, char a)
{
	char x_max;
	char y_max;
	char x1;
	char y1;

	y1 = y_max - 4;
	x_max = 3 * (x / 3) + 3;
	y_max = 3 * (y / 3) + 3;
	while (y1++ < y_max -1)
	{
		x1 = x_max - 4;
		while (x1++ < x_max -1)
		{
			if ((str[y1][x1] == a) && ((x1 != x) && (y1 != y)))
				return (FAIL);
		}
	}
	return (0);
}

char	check_x(char str[SIZE][SIZE], char x, char a)
{
	char i = -1;
	while (i++ < SIZE - 1)
	{
		if(str[x][i] == a)
			return (FAIL);
	}
	return (0);
}
