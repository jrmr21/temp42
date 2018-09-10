/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:33:06 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/10 14:14:39 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);
int		ft_rec(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (0);
	nb = ft_rec(nb, power);
	return (nb);
}

int		ft_rec(int nb, int power)
{
	if (power > 1)
		nb *= ft_rec(nb, --power);
	return (nb);
}
