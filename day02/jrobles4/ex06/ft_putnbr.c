/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:45:20 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/01 16:20:20 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr);
int		ft_putchar(char c);
unsigned int	check_int(int n);

void	ft_putnbr(int nbr)
{
	unsigned int size;
	unsigned int i;
	unsigned int nb;
	
	nb = check_int(nbr);
	i = 1;
	if (nb > 9)
	{
		size = 1;
		while ((nb - i) > 10  )
		{
			size++;
			i *= 10;
		}
		while (i > 10)
		{
			i /= 10;
			ft_putchar((nb / i)  + '0');
		}
	}
	else
	{
		ft_putchar(nb % 10 + '0');
	}
}

unsigned int	check_int(int n)
{
	unsigned int sortie;
	
	if(n < 0)
	{
		sortie =  n * -1;
		ft_putchar('-');
	}
	else
	{
		sortie = n;
	}
	return (sortie);
}
