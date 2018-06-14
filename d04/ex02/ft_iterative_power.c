/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 03:02:43 by sharris           #+#    #+#             */
/*   Updated: 2018/05/19 03:03:10 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int sum;

	sum = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		sum *= nb;
		power--;
	}
	return (sum);
}
