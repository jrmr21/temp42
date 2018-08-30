/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:01:00 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/29 23:18:42 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);
int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char *fr;

	fr = "abcdefghijklmnopqrstuvwxyz";
	while (*fr)
	{
		ft_putchar(*fr++);
	}
}
