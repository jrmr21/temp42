/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:21:12 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/11 18:22:08 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int cpt;

	cpt = 0;
	printf("%s  	%s\n",s1,s2 );
	while( *s1 == *s2 && *s1 != '\0' && cpt < n)
	{
		*s2+=1;
		*s1+=1;
		cpt++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	char g[] = "attG";
	char h[] = "attH";
	printf("%d ", ft_strncmp(g,h,3));
	return (0);
}
