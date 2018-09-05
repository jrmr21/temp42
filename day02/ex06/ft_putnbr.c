/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:45:20 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/05 11:08:45 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nbr);
int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int tempo;
	if(nb < 0)
	{
	   	tempo = nb * -1;
		ft_putchar('-');
	}
	else
		tempo = nb;

	if (tempo > 9 )
	{
		ft_putnbr(tempo / 10);
		ft_putchar((tempo % 10) + 48);
	}
	else
	{
		ft_putchar(tempo + 48);
		return ;
	}
}
