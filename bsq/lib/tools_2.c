/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:54:37 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 19:03:48 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_realloc(char *str, int size)
{
	char	*tmp;
	int		i;

	i = ft_strlen(str);
	tmp = (char*)malloc(sizeof(char) * i);
	if (tmp != NULL)
	{
		ft_strncpy(tmp, str, i);
		free(str);
	}
	str = (char*)malloc(sizeof(char) * i + size);
	if (str != NULL)
	{
		ft_strncpy(str, tmp, i);
		free(tmp);
	}
	return (str);
}

int		is_numeric(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}
