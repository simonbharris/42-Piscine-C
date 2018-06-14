/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:45:50 by sharris           #+#    #+#             */
/*   Updated: 2018/05/21 13:45:57 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int digit;

	digit = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
			ft_putchar(2 + '0');
		if (nb == -2147483648)
			nb = -147483648;
		nb *= -1;
	}
	if (nb == 0)
		ft_putchar('0');
	while (digit > 0)
	{
		if (nb / digit != 0)
			while (digit > 0)
			{
				ft_putchar((nb / digit) + '0');
				nb = nb - (nb / digit) * digit;
				digit /= 10;
			}
		digit /= 10;
	}
}
