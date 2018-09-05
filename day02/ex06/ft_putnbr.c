/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:45:20 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/05 04:21:32 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MIN -2147483648

void	ft_putnbr(int nbr);
int		ft_putchar(char c);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb > 9 || (nb * -1) > 9 )
	{
		//ft_putnbr(nb / 10);
		if (nb < 0)
			nb *= -1;
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		ft_putchar(nb + 48);
		return ;
	}
}

int		main(void)
{
	int	b;
	
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	return (0);
}
