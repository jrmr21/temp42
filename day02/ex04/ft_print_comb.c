/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:50:12 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/30 04:46:06 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = -1;
	while (c++ < 7)
	{
		d = c;
		while (d++ < 8)
		{
			u = d;
			while (u++ < 9)
			{
				ft_putchar(c % 10 + '0');
				ft_putchar(d % 10 + '0');
				ft_putchar(u % 10 + '0');
				if (c != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
