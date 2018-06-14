/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:26:26 by sharris           #+#    #+#             */
/*   Updated: 2018/05/28 21:26:28 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int result;

	i = -1;
	result = 1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			result = 0;
	}
	return (result);
}
