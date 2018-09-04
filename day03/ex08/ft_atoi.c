/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:35:54 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/04 20:36:52 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
int		ft_strlen(char *in);
int		ft_power(int nb, int power);
int		ft_np_value(char entre, int size);

int		ft_atoi(char *str)
{
	int power;
	int sortie;
	int i;
	int s_type;

	sortie = ft_strlen(str);
	s_type = 1;
	power = ft_np_value(str[i], sortie);
	i = -1;
	sortie = 0;
	while (++i < ft_strlen(str))
	{
		if ((i == 0 && str[i] == '-') || (i == 0 && str[i] == '+'))
			s_type = (str[0] == '-') ? -1 : 1;
		else if (str[i] < 47 || str[i] > 57)
			return ((sortie) / (power * 10) * s_type);
		else
		{
			sortie += (str[i] - 48) * power;
			power /= 10;
		}
	}
	return (sortie * s_type);
}

int		ft_np_value(char entre, int size)
{
	if (entre == '-' || entre == '+')
		return (ft_power(10, size - 1) / 100);
	else
		return (ft_power(10, size) / 100);
}

int		ft_power(int nb, int power)
{
	int tempo;

	tempo = nb;
	while (power--)
		nb *= tempo;
	return (nb);
}

int		ft_strlen(char *in)
{
	int size;

	size = 0;
	while (*in++)
		size++;
	return (size);
}
