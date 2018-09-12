/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 22:35:43 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/12 11:30:07 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	ft_strlowcase(char str);
char	ft_strupcase(char str);

char	ft_charupcase(char str)
{
	if (str < 123 && str > 96)
		str = str - 32;
	return (str);
}

char	ft_charlowcase(char str)
{
	if (str < 91 && str > 64)
		str = str + 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	maj;
	int		i;

	i = -1;
	maj = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if (maj)
			{
				maj = 0;
				str[i] = ft_charupcase(str[i]);
			}
			else
				str[i] = ft_charlowcase(str[i]);
		}
		else if (str[i] < 48 || str[i] > 57)
			maj = 1;
		else if (str[i] > 47 || str[i] < 58)
			maj = 0;
	}
	return (str);
}
