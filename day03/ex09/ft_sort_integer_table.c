/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:58:42 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/05 18:17:36 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	int cpt;
	int tmp;
	int tmp_cpt;
	int test;

	cpt = -1;
	while (++cpt < size-1)
	{
		test = tab[cpt];	
		tmp_cpt = -1;
		while (++tmp_cpt < size - 1)
		{
			if(test < tab[tmp_cpt])
			{
				tab[tmp_cpt + 1] = tab[tmp_cpt];
				tab[tmp_cpt] = test;
				tmp_cpt = size+5;
				printf("1|");
			}
		}
	}
}

int		main(void)
{
	int b[6] = {25,6,123,45,1,256};
	int c = 6;
	ft_sort_integer_table(b, 6);
	printf("\n **************** \n");
	while (c--)
		printf(" %d",b[c]);
	return (0);
}
