/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:23:56 by jrobles           #+#    #+#             */
/*   Updated: 2018/08/29 23:00:43 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void);
int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char *fr;

	fr = "zyxwvutsrqponmlkjihgfedcbda";
	while (*fr)
	{
		ft_putchar(*fr++);
	}
}
