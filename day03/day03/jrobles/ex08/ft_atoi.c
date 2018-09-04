/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:31:25 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/04 19:06:47 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	// 		/!\	to delete /!\
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX 	2147483647
#define MIN		-2147483648

int		ft_atoi(char *str);
int		ft_strlen(char *in);
int		ft_power(int nb, int power);

int		ft_atoi(char *str)
{
	int power;
	int sortie;
	int i;
	char s_power;

	sortie = ft_strlen(str);
	s_power = 1;
	power = (str[0] != '+' && str[0] != '-')? ft_power(10, sortie)/100: ft_power(10,sortie-1)/100;
	i = 0;
	sortie = 0;
	while( i < ft_strlen(str) )
	{
		if((i == 0 && str[i] == '-') || (i == 0 && str[i] == '+') )
			s_power = (str[0] == '-')? -1 : 1 ;
		else if( str[i] < 47 || str[i] > 57)
			return (sortie * s_power);
		else
		{
			sortie += (str[i] - 48) * power;
			power /= 10;	
		}
		i++;	
	}
	return (sortie * s_power );
}

int		ft_power(int nb, int power)
{
	int tempo;

	tempo = nb;
	while(power--) 
		nb *= tempo;
	return (nb);
}

int		ft_strlen(char *in)
{
	int size;

	size = 0;
	while(*in++)
		size++;
	return (size);
}

int		main(void)
{
	char *b;
	while(1)
	{
		scanf("%s",b);
		printf("\nme: %d\n",ft_atoi(b));
		printf("\npc: %d\n",atoi(b));
	}	
	return (0);
}
