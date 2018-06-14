/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 20:04:46 by sharris           #+#    #+#             */
/*   Updated: 2018/05/23 20:04:48 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int sz;
	int *range;

	i = 0;
	if (min >= max)
		return (0);
	sz = max - min;
	range = (int*)malloc(sizeof(*range) * sz);
	while (i < sz)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
