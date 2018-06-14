/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:10:38 by sharris           #+#    #+#             */
/*   Updated: 2018/05/28 22:10:39 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/ft_opp.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;

	i = -1;
	if (argc != 4)
		return (0);
	while (++i < (int)sizeof(g_opptab) / (int)sizeof(*g_opptab))
	{
		if (ft_strcmp(argv[2], g_opptab[i].op) == 0)
		{
			g_opptab[i].fun_opp(ft_atoi(argv[1]), ft_atoi(argv[3]));
			write(1, "\n", 1);
			return (0);
		}
	}
	i = -1;
	while (++i < (int)sizeof(g_opptab) / (int)sizeof(*g_opptab))
	{
		if (ft_strcmp(g_opptab[i].op, "") == 0)
		{
			g_opptab[i].fun_opp(42, 42);
			write(1, "\n", 1);
			return (0);
		}
	}
	return (0);
}

void	ft_usage(int nbr1, int nbr2)
{
	nbr1 = -1;
	nbr2 = 0;
	ft_putstr("error : only [");
	while (++nbr1 < (int)sizeof(g_opptab) / (int)sizeof(*g_opptab))
	{
		ft_putstr(" ");
		ft_putstr(g_opptab[nbr1].op);
	}
	ft_putstr("] are accepted.");
}
