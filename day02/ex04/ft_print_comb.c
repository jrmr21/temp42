/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:50:12 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/30 02:15:16 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_print_comb(void);

int main (void)
{
	ft_print_comb();
	return (0);
}

void ft_print_comb(void)
{
	int c;
	int d;
	int u;
	c = 0;
	d = 1;
	u = 2;
	while(c<8)
	{
		while(d<9)
		{
			ft_putchar(d);
			while(u<10)
			{
				ft_putchar(u);
				u++;
			}
			d++;
		}
		c++;	
	}
}

int    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
