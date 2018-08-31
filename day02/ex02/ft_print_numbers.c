/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 19:02:25 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/31 03:16:52 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void);
int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char *num;

	num = "0123456789";
	while (*num)
	{
		ft_putchar(*num++);
	}
}
