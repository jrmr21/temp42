/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 19:02:25 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/31 10:49:18 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);
int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char *num;

	num = "0123456789";
	while (*num)
	{
		ft_putchar(*num++);
	}
}
