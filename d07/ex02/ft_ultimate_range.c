/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 21:29:47 by sharris           #+#    #+#             */
/*   Updated: 2018/05/23 21:29:48 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *iarr;

	i = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	iarr = (int*)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		iarr[i - min] = i;
		i++;
	}
	*range = iarr;
	return (max - min);
}
