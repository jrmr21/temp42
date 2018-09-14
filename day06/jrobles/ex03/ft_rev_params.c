/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 11:24:51 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/14 12:00:45 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	putstr(char *c);

void	putstr(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (--i > 0)
	{
		putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
