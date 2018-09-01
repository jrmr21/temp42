/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 00:26:17 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/01 13:58:57 by jrobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	draw(int size, char img1, char img2);

void	rush(int x, int y)
{	
	if(y > 2)
	{
		draw(x, 'o', '-');
		while (y-- - 2)
			draw(x, '|', ' ');
		draw(x, 'o', '-');
	}
	else
	{
		while(y--)
		{
			draw(x, 'o', '-');
		}
	}
}

void	draw(int size, char img1, char img2)
{
		if(size > 2)
		{
			ft_putchar(img1);
			while(size-- - 2)
			{
				ft_putchar(img2);
				if((size -2) < 1  )
				{
					ft_putchar(img1);
					ft_putchar('\n');
				}
			}
		}
		else
		{
			while(size--)
				ft_putchar(img1);
			ft_putchar('\n');
		}
}	
