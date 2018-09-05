/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:58:42 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/05 19:49:35 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
	int cpt;
	int i;
	int test;

	cpt = -1;
	while (++cpt < size)
	{
		i = -1;
		while (++i < size - 1)
		{
			if (tab[i] < tab[i + 1])
			{
				test = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = test;
			}
		}
	}
}
