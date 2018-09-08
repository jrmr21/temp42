/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:38:11 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/08 18:42:39 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 9

#include <unistd.h>

void	show_table(char table[SIZE][SIZE]);
char	set_table(char table[SIZE][SIZE], char **input);
char	get_lenght(char *c);

int		main(int argc, char **argv)
{
	char sudoka[SIZE][SIZE];
	char error;
	
	error = 0;

	error = set_table(sudoka, argv);
	if(error != 0 || argc != 10)
	{
		write(1, "Error\n", 6);
		return (-42);
	}

	show_table(sudoka);
	return (0);
}

char	set_table(char table[SIZE][SIZE], char **input)
{
	char x;
	char y;

	y = -1;
	while (y++ < SIZE -1)
	{
		x = -1;	
		while (x++ < SIZE -1)
		{
			if((input[y+1][x]) 
					&& ((input[y+1][x] > 47) && (input[y+1][x] < 58) 
						|| input[y+1][x] == 46)
							&& (get_lenght(input[y+1] == 9)))
				table[y][x] = input[y+1][x];
			else
				return (1);
		}
	}
	return (0);
}

char get_lenght(char *c)
{
	char size;
	
	size = 0;
	while (*c++)
		size++;
	return (size);
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
