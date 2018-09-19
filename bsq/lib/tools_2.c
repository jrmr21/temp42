/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:54:37 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/19 16:32:29 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_realloc(char *str, int size)
{
	char	*tmp;
	int		i;

	i = ft_strlen(str);
	tmp = (char*)malloc(sizeof(char) * i);
	ft_strncpy(tmp, str, i);
	free(str);
	str = (char*)malloc(sizeof(char) * i + size);
	ft_strncpy(str, tmp, i);
	free(tmp);
	return (str);
}
