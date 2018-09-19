/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:25:28 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/19 16:33:37 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAN_H
# define SCAN_H

# include "../lib/tools.h"
# include "../read/read.h"

void	scan_case(t_bscu *bsq, unsigned int x, unsigned int y);
void	scan_table(t_bscu *bsq);
void	b_cube(t_bscu *bsq, unsigned int x, unsigned int y, unsigned int size);

#endif
