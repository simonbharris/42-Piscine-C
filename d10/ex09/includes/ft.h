/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:52:44 by sharris           #+#    #+#             */
/*   Updated: 2018/05/29 15:52:45 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void			ft_add(int nbr1, int nbr2);
void			ft_sub(int nbr1, int nbr2);
void			ft_mul(int nbr1, int nbr2);
void			ft_div(int nbr1, int nbr2);
void			ft_mod(int nbr1, int nbr2);

void			ft_print_div_by_zero_err(void);
void			ft_print_mod_by_zero_err(void);
void			ft_usage(int nbr1, int nbr2);

int				ft_atoi(char *str);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);
void			ft_putchar(char c);
int				ft_strcmp(char *s1, char *s2);

typedef struct	s_opp
{
	char *op;
	void (*fun_opp)(int, int);
}				t_opp;

#endif
