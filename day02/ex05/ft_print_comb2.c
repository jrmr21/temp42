/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:18:53 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/31 07:22:08 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_comb2(void);
void	show_space(int a);

void	ft_print_comb2(void)
{
	int number_one;
	int number_two;

	number_one = -1;
	while (number_one++ < 98)
	{
		number_two = number_one;
		while (number_two++ < 99)
		{
			if (number_one < 10)
				ft_putchar('0');
			else
				ft_putchar((number_one / 10) % 10 + '0');
			ft_putchar(number_one % 10 + '0');
			ft_putchar(' ');
			if (number_two < 10)
				ft_putchar('0');
			else
				ft_putchar((number_two / 10) % 10 + '0');
			ft_putchar(number_two % 10 + '0');
			shoz_space(number_one);
		}
	}
}

void	show_space(int a)
{
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
