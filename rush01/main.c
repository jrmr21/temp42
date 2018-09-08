/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:38:11 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/08 17:18:15 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 9

#include <stdio.h>
#include <unistd.h>

void	xrange(char c, char table[SIZE][SIZE]);
void	show_table(char table[SIZE][SIZE]);
void	set_table(char table[SIZE][SIZE], char **input);

int		main(int argc, char **argv)
{
	char sudoka[SIZE][SIZE];
	char l;
	char c;

	if (argc != 10)
	{
		write(1, "Error\n",6);
		return (-42);
	}
	xrange('0', sudoka);
	set_table(sudoka, argv);

	show_table(sudoka);
	return (0);
}

void	set_table(char table[SIZE][SIZE], char **input)
{
	signed char cpt_[4];

	cpt_[0] = -1;
	cpt_[1] = -1;
	cpt_[2] = 0;
	while (cpt_[0]++)
	{
		cpt_[1] = -1;
		while (cpt_[1]++)
		{
			cpt_[2]++;
			table[cpt_[0]] [cpt_[1]] = *input[cpt_[2]];
		}
	}
}

void	xrange(char c, char table[SIZE][SIZE])
{
	char x;
	char y;
	
	y = -1;
	while (y++ < SIZE -1 )
	{
		x = -1;
		while (x++ < SIZE -1)
			table[y][x] = c;
	}
}

void	show_table(char table[SIZE][SIZE])
{
	char x;
	char y;
	char tempo;

	y = -1;
	while (y++ < SIZE - 1)
	{
		write(1, "\n", 1);
		x = -1;
		while (x++ < SIZE -1)
		{
			tempo = table[y][x];
			write(1, &tempo, 1);
			write(1, " ",1);
		}
	}
}
