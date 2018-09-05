/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 02:57:41 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/05 12:54:27 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	char tempo;

	while (*str)
	{
		tempo = *str++;
		ft_putchar(tempo);
	}
}
