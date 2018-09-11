/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:17:02 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/11 11:03:09 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr( char *str, char *to_find);

char *ft_strstr( char *str, char *to_find)
{
	char 			*dest;
	unsigned int 	i_find;
	unsigned int 	i;
	char			check;
	unsigned int	t;
	
	i 		= -1;
	check 	= 0;
	i_find 	= 0;
	while (to_find[i_find] != '\0' )
		i_find++;
	while (str[++i] != '\0')
	{
		if (str[i] == to_find[0] && check == 0)
		{
			t		= -1;
			check 	= 1;
			while (++t < i_find )
				if (str[t+i] != to_find[t])
					check = 0;
			t = 0;
		}
		if (check == 1)
			dest[t++] = str[i];
	}
	dest[t] = '\0';
	return (dest);
}
