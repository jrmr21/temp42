/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checks.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:59:12 by bajouini          #+#    #+#             */
/*   Updated: 2018/09/09 21:06:22 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_CHECKS_H
# define SUDOKU_CHECKS_H
# include "sudoku.h"

char	check_x(char str[SIZE][SIZE], int x, char a);
char	check_y(char str[SIZE][SIZE], int y, char a);
char	check_bloc(char str[SIZE][SIZE], int x, int y, char a);

#endif
