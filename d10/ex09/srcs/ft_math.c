/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:51:52 by sharris           #+#    #+#             */
/*   Updated: 2018/05/29 04:51:53 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void		ft_add(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 + nbr2);
}

void		ft_sub(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 - nbr2);
}

void		ft_mul(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 * nbr2);
}

void		ft_div(int nbr1, int nbr2)
{
	if (nbr2 == 0)
		ft_print_div_by_zero_err();
	else
		ft_putnbr(nbr1 / nbr2);
}

void		ft_mod(int nbr1, int nbr2)
{
	if (nbr2 == 0)
		ft_print_mod_by_zero_err();
	else
		ft_putnbr(nbr1 % nbr2);
}
