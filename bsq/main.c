/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:34:43 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 00:02:59 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/tools.h"
#include "read/read.h"
#include "scan/scan.h"

void	display(t_bscu *bsq)
{
	int i;
	int j;

	i = 0;
	while (bsq[0].map[i])
	{
	j = 0;
		while (bsq[0].map[i][j] != '\0')
		{
			write(1, &bsq[0].map[i][j], 1);
			j++;
		}
		i++;
	}
}


int		main(int argc, char **argv)
{
	t_bscu bsq;

	if (argc != 1)
		ft_open_files(argc, argv);
	else
		ft_read(0, &bsq);

	return (0);
}
