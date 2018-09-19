/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:05:35 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 16:34:04 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIF_H
# define VERIF_H

#include "../lib/tools.h"

int		verif_char(char buf, t_bscu *bsq);
void	verif_col(t_bscu *bsq, int i, int j);
void	verif_line(t_bscu *bsq, int i);

#endif
