/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 04:05:23 by sharris           #+#    #+#             */
/*   Updated: 2018/05/30 04:05:24 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;
	t_list	*tmp;

	i = ac - 1;
	begin_list = ft_create_elem(av[i]);
	tmp = begin_list;
	while (--i >= 0)
	{
		tmp->next = ft_create_elem(av[i]);
		tmp = tmp->next;
	}
	return (begin_list);
}
