/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:11:59 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/03 13:33:35 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str);
int     ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int size;
	int i;
	char tempo;
	
	size = ft_strlen(str) ;
	i = 0;
	while (i <= size)
	{
		
		tempo = str[size];
		str[size] = str[i];
		str[i] = tempo;
		i++;
		size--;
	}
	return (str);	
}

int     ft_strlen(char *str)
{
	int out;
	
	out = 0;
	while (*str)
	{
		out++;
	}
	return (out);
}

int main(void)
{
	char *mot;
	char tmp;

	mot = "titi et gros minet";
	ft_strrev(mot);

	while(*mot - 1)
	{
		tmp = *mot++;
		write(1, &tmp, 1);
	}
	return 0;
}
