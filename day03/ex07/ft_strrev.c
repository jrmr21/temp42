/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:11:59 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/02 12:07:30 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str);
int     ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int size;

	size = ft_strln(*str) + 1;
	while(size--)
	{
		write(1, *str + size, 1);
	}	
}

int     ft_strln(char *str)
{
	int out;

	out = 0;
	while(*str)
		out ++;
	return (out);
}

int main(void)
{
	void *pt_function;

	char	(*pt_function)(char *);
	pt_function = ft_strrev;
	void (*pt_function)("salut");

	return 0;
}
