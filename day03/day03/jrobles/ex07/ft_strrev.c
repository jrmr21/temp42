/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:11:59 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/04 02:36:27 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str);
int		ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	*tempo;
	char	prout[*str];

	i = -1;
	size = ft_strlen(str);
	while (i++ <= size--)
	{
		prout[i] = str[size];
		prout[size] = str[i];
	}
	tempo = prout;
	return (tempo);
}

int		ft_strlen(char *str)
{
	int out;

	out = 0;
	while (*str++)
		out++;
	return (out);
}

int main(void)
{
	char *b = ft_strrev("salut");
	while(*b)
	{
		char c=*b++;
		write(1, &c, 1);
	}

}
