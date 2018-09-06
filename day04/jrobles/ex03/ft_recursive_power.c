/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:33:06 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/06 11:54:09 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);
int		ft_rec(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (0);
	nb = ft_rec(nb, nb, power);
	return (nb);
}

int		ft_rec(int nb, int power)
{
	if (power > 1)
		nb *= ft_rec(nb, --power);
	return (nb);
}
