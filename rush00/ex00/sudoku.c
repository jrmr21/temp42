/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:32:28 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 18:58:19 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define 	FAIL 	1
#define		SUCCES 	0
#define		SIZE 	9
#include 	<stdio.h>
#include	<unistd.h>

char    check_x(char str[SIZE][SIZE], char x, char a);
char    check_y(char str[SIZE][SIZE], char y, char a);
char    check_bloc(char str[SIZE][SIZE], char x, char y, char a);
char    update_case(char str[SIZE][SIZE], int x, int y);
char	set_cursor(char str[SIZE][SIZE], int *x, int *y);
void	show_table(char str[SIZE][9]);//


char	update_case(char str[SIZE][SIZE], int x, int y)
{
	char r;
	char try;
	char a,b,c;

	try = 1 + 48;
	r = set_cursor(str, &x, &y);
	printf("\n 	y:%d   x:%d   try:%d",y,x,try);
	while(r == FAIL)
	{
		if (try >= 58)
		{
			str[y][x] = '.';
			return (FAIL);
		}
		a = check_x(str, y, try);
		b = check_y(str, x, try);
		c = check_bloc(str, x, y, try);
		
		if ((a == SUCCES && b == SUCCES) && c == SUCCES)
		{
			str[y][x] = try;
			printf("\nEcrase y:%d  x:%d  val: %c",y,x,try);
			r = update_case(str, x, y);
		}	
		try += 1;
	}
	return (0);
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

char check_y(char str[SIZE][SIZE], char y, char a)
{
	char i;
	
	i = -1;
	while ( i < SIZE-1)
	{
		if(str[++i][y] == a)
			return (FAIL);
//		printf("\n YY %d",i);
	}
	return(SUCCES);
}

char    check_bloc(char str[SIZE][SIZE], char x, char y, char a)
{
	char x_max;
	char y_max;
	char x1;
	char y1;

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

char	check_x(char str[SIZE][SIZE], char x, char a)
{
	char i;
	
	i = 0;
	while (i < SIZE -1)
	{
		if(str[x][i] == a)
		{
			return (FAIL);
		}
		i++;
//		printf(" \n XX %d",i);
	}
	return (SUCCES);
}
