/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:17:02 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/12 18:02:16 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strstr(char *str, char *to_find);
void			strstr_init(unsigned int *a, unsigned int *b, char *c);
unsigned int	set_cursor(char *dest);

void			strstr_init(unsigned int *a, unsigned int *b, char *c)
{
	*a = 0;
	*b = -1;
	*c = 0;
}

unsigned int	set_cursor(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char			*ft_strstr(char *str, char *to_find)
{
	char			check;
	unsigned int	i_find;
	unsigned int	i;
	unsigned int	t;

	if (to_find[0] == '\0')
		return (str);
	strstr_init(&i_find, &i, &check);
	i_find = set_cursor(to_find);
	while (str[++i] != '\0' && check == 0)
	{
		if (str[i] == to_find[0] && check == 0)
		{
			t = -1;
			while (++t < i_find)
				check = (str[t + i] != to_find[t]) ? 0 : 1;
			t = 0;
		}
	}
	if (check == 1)
		return (&str[i - 1]);
	else
		return (0);
}
