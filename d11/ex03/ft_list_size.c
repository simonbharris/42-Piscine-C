/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 03:53:16 by sharris           #+#    #+#             */
/*   Updated: 2018/05/30 03:53:17 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*tmp;

	counter = 0;
	if (begin_list)
	{
		counter++;
		tmp = begin_list;
		while (tmp->next)
		{
			tmp = tmp->next;
			counter++;
		}
	}
	return (counter);
}
