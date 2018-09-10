/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:20:56 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/10 14:09:28 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int out;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	out = nb;
	while (--power)
	{
		out *= nb;
	}
	return (out);
}
