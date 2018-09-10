/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:39:27 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/10 14:49:29 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}
