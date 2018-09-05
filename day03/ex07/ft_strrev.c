/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:11:59 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/05 19:50:22 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);
int		ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	tempo;

	i = 0;
	size = ft_strlen(str);
	while (i < (size + 1) / 2)
	{
		tempo = str[i];
		str[i] = str[size - i];
		str[size - i] = tempo;
		i++;
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int out;

	out = 0;
	while (*str++)
		out++;
	return (out - 1);
}
