/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 00:06:18 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/10 14:06:19 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int tempo;

	tempo = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		tempo *= nb;
		nb--;
	}
	return (tempo);
}
