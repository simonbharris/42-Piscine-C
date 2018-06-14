/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 22:21:49 by sharris           #+#    #+#             */
/*   Updated: 2018/05/24 22:21:50 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strdup(char *str)
{
	char	*rs;
	int		i;

	i = 0;
	while (str[i])
		i++;
	rs = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		rs[i] = str[i];
		i++;
	}
	rs[i] = '\0';
	return (rs);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_par	*stk;

	i = 0;
	stk = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stk[i].size_param = j;
		stk[i].str = av[i];
		stk[i].copy = ft_strdup(av[i]);
		stk[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stk[i].str = 0;
	return (stk);
}
