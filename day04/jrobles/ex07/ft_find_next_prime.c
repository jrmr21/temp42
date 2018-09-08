/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 00:28:21 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/08 00:38:04 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_find_next_prime(int nb);
int		ft_is_prime(int nb);

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while ((nb % i) != 0)
		i++;
	return ((i == nb) ? 1 : 0);
}

int		ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
	return (0);
}
