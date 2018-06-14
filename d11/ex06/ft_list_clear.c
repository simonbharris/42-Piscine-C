/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 20:51:54 by sharris           #+#    #+#             */
/*   Updated: 2018/05/30 20:51:55 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *cur;
	t_list *into;

	cur = *begin_list;
	if (!cur)
		return ;
	while (cur)
	{
		into = cur->next;
		free(cur);
		cur = into;
	}
	*begin_list = 0;
}
