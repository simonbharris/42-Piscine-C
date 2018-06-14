/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:03:56 by sharris           #+#    #+#             */
/*   Updated: 2018/05/18 22:29:04 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	int d;
	int m;

	d = *a;
	m = *b;
	div = d / m;
	mod = d % m;
	*a = div;
	*b = mod;
}
