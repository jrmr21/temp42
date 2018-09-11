/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:38:11 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/11 16:38:33 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	char sudoka[SIZE][SIZE];
	char error;

	error = 0;
	if (argc == 10)
		error = set_table(sudoka, argv);
	if (error == FAIL || argc != 10)
	{
		write(1, "Error\n", 6);
		return (-42);
	}
	update_case(sudoka, 0, 0);
	show_table(sudoka);
	return (SUCCES);
}

char	set_table(char table[SIZE][SIZE], char **input)
{
	int x;
	int y;

	y = -1;
	while (y++ < SIZE - 1)
	{
		x = -1;
		while (x++ < SIZE - 1)
		{
			if ((input[y + 1][x]) &&
					(((input[y + 1][x] > 47) && (input[y + 1][x] < 58))
					|| (input[y + 1][x] == 46)) &&
					(get_lenght(&input[y + 1][0]) == 9))
			{
				table[y][x] = input[y + 1][x];
			}
			else
				return (FAIL);
		}
	}
	return (SUCCES);
}

int		get_lenght(char *c)
{
	int	size;

	size = 0;
	while (*c++)
		size++;
	return (size);
}

void	show_table(char table[SIZE][SIZE])
{
	int		x;
	int		y;
	char	tempo;

	y = -1;
	while (y++ < SIZE - 1)
	{
		x = -1;
		while (x++ < SIZE - 1)
		{
			tempo = table[y][x];
			write(1, &tempo, 1);
			if (x < SIZE - 1)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
