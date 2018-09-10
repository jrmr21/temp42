/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:17:02 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/10 18:11:57 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find)
{
	char 			*dest;
	unsigned int 	i_find;
	unsigned int 	i;
	char			check;
	int				t;

	i 		= 0;
	check 	= 0;
	i_find 	= 0;
	while (*tofind++)
		i_find++;
	while (*str++)
	{
		if (*str == to_find[i] && check != 1)
		{
			t		= -1;
			check 	= 1;
			while (t++ < i_find)
			{
				if (str[t] != to_find[t])
					check = 0;
			}
		}
		else if (check == 1)
			des[i] = str[i];
		i++;
	}
	des[i] = '\0';
	return (dest);
}

int		main(void)
{

	return (0);
}
