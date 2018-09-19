/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:23:55 by jrobles           #+#    #+#             */
/*   Updated: 2018/09/19 18:17:49 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct			s_carre
{
	unsigned int		x;
	unsigned int		y;
	unsigned int		size;
}						t_carre;

typedef struct			s_bscu
{
	int					line;
	int					col;
	unsigned int		nb_obstacle;
	char				empty;
	char				obstacle;
	char				full;
	char				**map;
	char				valid;
	t_carre				carre;
}						t_bscu;

void					ft_putchar(char c);
char					*ft_strncpy(char *dest, char *src, unsigned int n);
void					ft_puts(char *str);
int						ft_strlen(char *str);
int						ft_atoi(char *str);
char					*ft_realloc(char *str, int size);
int						is_numeric(char *str);

#endif
