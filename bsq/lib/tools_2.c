/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:54:37 by tbeguin           #+#    #+#             */
/*   Updated: 2018/09/18 22:27:22 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_realloc(char *str, int size)
{
	char *tmp;
	int i;

	i = ft_strlen(str);
	tmp = (char*)malloc(sizeof(char) * i);
	ft_strncpy(tmp, str, i);
	free(str);
	str = (char*)malloc(sizeof(char) * i + size);
	ft_strncpy(str, tmp, i);
	free(tmp);
	return (str);
}

t_bscu	ft_reinit_struct(t_bscu *bsq)
{
	t_bscu new_bsq;

	new_bsq.ligne = -1;

	free(bsq);
	*bsq = new_bsq;
	return (bsq[0]);
}
