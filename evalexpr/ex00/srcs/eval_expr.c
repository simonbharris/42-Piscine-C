/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 07:39:57 by sharris           #+#    #+#             */
/*   Updated: 2018/06/03 07:39:59 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*g_exp;

int		ft_getnbr(void)
{
	int is_neg;
	int res;

	res = 0;
	is_neg = 0;
	while (*g_exp && (((*g_exp >= '0' && *g_exp <= '9') || *g_exp == '-')))
	{
		if (*g_exp == '-')
			is_neg = 1;
		else
		{
			res *= 10;
			res += *g_exp - '0';
		}
		g_exp++;
	}
	if (is_neg)
		res = -res;
	if (*g_exp && *g_exp != ')')
		g_exp++;
	return (res);
}

int		ft_parse_factor(void)
{
	int sum;

	sum = 0;
	while (*g_exp == ' ')
		g_exp++;
	while (*g_exp)
	{
		if (*g_exp && (((*g_exp >= '0' && *g_exp <= '9') || *g_exp == '-')))
			return (ft_getnbr());
		else if (*g_exp == '(')
		{
			g_exp++;
			sum = ft_parse_sum();
			if (*g_exp == ')')
				g_exp++;
			return (sum);
		}
	}
	return (-42424242);
}

int		ft_parse_sum(void)
{
	int		opd1;
	int		opd2;
	char	opr;

	opd1 = ft_parse_prod();
	while (*g_exp == '+' || *g_exp == '-')
	{
		opr = *g_exp;
		g_exp += 2;
		opd2 = ft_parse_prod();
		if (opr == '+')
			opd1 = opd1 + opd2;
		if (opr == '-')
			opd1 = opd1 - opd2;
	}
	return (opd1);
}

int		ft_parse_prod(void)
{
	int		opd1;
	int		opd2;
	char	opr;

	opd1 = ft_parse_factor();
	while (*g_exp)
	{
		while (*g_exp == ' ')
			g_exp++;
		opr = *g_exp;
		if (*g_exp == '*' || *g_exp == '/' || *g_exp == '%')
		{
			g_exp++;
			opd2 = ft_parse_factor();
			if (opr == '*')
				opd1 = opd1 * opd2;
			if (opr == '/')
				opd1 = opd1 / opd2;
			if (opr == '%')
				opd1 = opd1 % opd2;
		}
		else
			return (opd1);
	}
	return (opd1);
}

int		eval_expr(char *str)
{
	g_exp = str;
	return (ft_parse_sum());
}
