/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:41:33 by sharris           #+#    #+#             */
/*   Updated: 2018/06/01 15:41:33 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree *tmp;

	tmp = *root;
	if (!tmp)
		return ;
	if (cmpf(data_ref, tmp->data) < 0)
		return btree_search_item(data_ref, tmp->left, cmpf);
	else if (cmpf(data_ref, tmp->data) == 0)
		return (tmp);
	else if (cmpf(data_ref, tmp->data) > 0)
		return (btree_search_item(data_ref, tmp->right, cmpf));
	return ;
}
