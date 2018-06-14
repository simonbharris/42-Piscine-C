/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:46:39 by sharris           #+#    #+#             */
/*   Updated: 2018/05/28 18:46:42 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *store;

	i = -1;
	store = (int *)malloc(sizeof(int) * (length));
	while (++i < length)
	{
		store[i] = f(tab[i]);
	}
	return (store);
}
