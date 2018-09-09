/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:32:28 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 04:32:40 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define 	FAIL 1
#define		SIZE 9
#include <stdio.h>

char    check_x(char str[SIZE][SIZE], char x, char a);
char    check_y(char str[SIZE][SIZE], char y, char a);
char    check_bloc(char str[SIZE][SIZE], char x, char y, char a);
char    update_case();

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
