/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:39:40 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/09 20:23:26 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define FAIL 1
# define SUCCES 0
# define SIZE 9
# include <unistd.h>

char    check_x(char str[SIZE][SIZE], int x, char a);
char    check_y(char str[SIZE][SIZE], int y, char a);
char    check_bloc(char str[SIZE][SIZE], int x, int y, char a);
char    update_case(char str[SIZE][SIZE], int x, int y);
char	set_cursor(char str[SIZE][SIZE], int *x, int *y);
void	show_table(char table[SIZE][SIZE]);
char	set_table(char table[SIZE][SIZE], char **input);
int		get_lenght(char *c);
char	update_case2(char str[SIZE][SIZE], int x, int y);

#endif
