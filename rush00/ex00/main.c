/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:38:11 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 19:02:25 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 9
#define BUG 1

char	check_x(char str[SIZE][SIZE], char x, char a);
char	check_y(char str[SIZE][SIZE], char y, char a);
char	check_bloc(char str[SIZE][SIZE], char x, char y, char a);
char	update_case(char str[SIZE][SIZE], int x, int y);

void	show_table(char table[SIZE][SIZE]);
char	set_table(char table[SIZE][SIZE], char **input);
int		get_lenght(char *c);

int		main(int argc, char **argv)
{
	char sudoka[SIZE][SIZE];
	char error;

	error = 0;
	if(argc == 10)
		error = set_table(sudoka, argv);
	if(error == BUG || argc != 10)
	{
		write(1, "Error\n", 6);
		return (-42);
	}

	update_case(sudoka, 0, 0);	
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
			if((input[y+1][x]) 	&& 
					(((input[y+1][x] > 47) && (input[y+1][x] < 58)) 
					|| (input[y+1][x] == 46)) && 
					(get_lenght(&input[y+1][0]) == 9))
			{
				table[y][x] = input[y+1][x];
			}
			else
				return (BUG);
		}
	}
	return (0);
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
	char x;
	char y;
	char tempo;

	y = -1;
	while (y++ < SIZE - 1)
	{
		x = -1;
		while (x++ < SIZE -1)
		{
			tempo = table[y][x];
			write(1, &tempo, 1);
			if(x < SIZE - 1)
				write(1, " ",1);
		}
		write(1, "\n", 1);
	}
}
