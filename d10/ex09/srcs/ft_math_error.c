/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:54:13 by sharris           #+#    #+#             */
/*   Updated: 2018/05/29 04:54:14 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_print_div_by_zero_err(void)
{
	ft_putstr("Stop : division by zero");
}

void	ft_print_mod_by_zero_err(void)
{
	ft_putstr("Stop : modulo by zero");
}
