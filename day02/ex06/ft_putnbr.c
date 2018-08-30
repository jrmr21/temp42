/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:45:20 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/30 15:12:29 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_putchar(char c);

int		main(void)
{
	ft_putnbr(5564646);
	return (0);
}

void	ft_putnbr(int nb)
{
	int i;
	int size;

	i = 1;
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

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
