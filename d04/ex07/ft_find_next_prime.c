/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:10:22 by sharris           #+#    #+#             */
/*   Updated: 2018/05/19 14:44:56 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int x;
	int y;

	x = 2;
	y = 2;
	if (nb <= 1)
		return (0);
	while (x <= nb / 2)
	{
		if (x * y == nb)
			return (0);
		if (x == y)
		{
			x++;
			y = 2;
		}
		else
			y++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		while (!ft_is_prime(nb))
			nb++;
	return (nb);
}
