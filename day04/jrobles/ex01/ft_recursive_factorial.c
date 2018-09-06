/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 03:17:43 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/06 11:17:49 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);
int		ft(int nb, int cpt);

int		ft_recursive_factorial(int nb)
{
	int c;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 | nb == 1)
		return (1);
	c = 1;
	nb = ft(c, nb);
	return (nb);
}

int		ft(int nb, int cpt)
{
	if (cpt > 1)
		return (ft((nb * cpt), (cpt - 1)));
	else
		return (nb);
}
