/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 03:26:31 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 16:32:55 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

# include <fcntl.h>
# include "../lib/tools.h"
# include "../scan/scan.h"
# include "../verif/verif.h"

void	ft_open_files(char *argv, t_bscu *bsq);
void	ft_read(int fd, t_bscu *bsq);
void	ft_read_first_line(t_bscu *bsq, int fd);

#endif
