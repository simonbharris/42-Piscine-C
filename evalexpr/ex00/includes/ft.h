/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 18:04:01 by sharris           #+#    #+#             */
/*   Updated: 2018/06/03 18:04:11 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_parse_prod(void);
int		ft_getnbr(void);
int		ft_parse_factor(void);
int		ft_parse_sum(void);
int		eval_expr(char *str);

void	ft_putchar(char c);
void	ft_putnbr(int nbr);

#endif
