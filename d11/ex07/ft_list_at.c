/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 21:32:20 by sharris           #+#    #+#             */
/*   Updated: 2018/05/30 21:32:21 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*curr;

	i = 0;
	curr = begin_list;
	if (begin_list == 0)
		return (begin_list);
	while (curr)
	{
		if (i++ == nbr)
			return (curr);
		curr = curr->next;
	}
	return (0);
}
