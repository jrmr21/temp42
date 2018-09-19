/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:24:06 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/19 16:32:21 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		i;
	char	out;
	int		sortie;

	i = 0;
	sortie = 0;
	out = 1;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v' ||
				str[i] == ' ' || str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		i++;
		out = -1;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] > 47) && (str[i] < 58))
	{
		sortie *= 10;
		sortie += (str[i] - 48);
		i++;
	}
	return (sortie * out);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_puts(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
