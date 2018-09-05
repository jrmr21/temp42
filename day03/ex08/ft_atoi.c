/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:35:54 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/06 00:19:05 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int		i;
	char	out;
	int		sortie;

	i = 0;
	sortie = 0;
	out = 1;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v' ||
			str[i] == ' ' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		i++;
		out = -1;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] > 48) && (str[i] < 58))
	{
		sortie *= 10;
		sortie += (str[i] - 48);
		i++;
	}
	return (sortie * out);
}
