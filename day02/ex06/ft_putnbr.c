/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:45:20 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/31 05:06:49 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int size;
	unsigned int i;

	i = 1;
	if (nb < 0)
		ft_putchar('-');
	if (nb > 9)
	{
		size = 0;
		while ((nb - i) > 10)
		{
			size++;
			i *= 10;
		}
		while (size-- > 0)
		{
			i /= 10;
			ft_putchar((nb / i) % 10 + '0');
		}
	}
	else
	{
		ft_putchar(nb % 10 + '0');
	}
}
