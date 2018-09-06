/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:20:56 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/06 11:31:42 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int out;

	if (power < 1)
		return (0);
	out = nb;
	while (--power)
	{
		out *= nb;
	}
	return (out);
}
