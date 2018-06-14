/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:14:58 by jkellehe          #+#    #+#             */
/*   Updated: 2018/05/20 15:22:14 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int xcount;
	int ycount;

	xcount = 1;
	ycount = 1;
	while (ycount <= y)
	{
		xcount = 1;
		while (xcount <= x)
		{
			if ((ycount == 1) & (xcount == 1 || xcount == x))
				ft_putchar('A');
			else if ((ycount == y) & (xcount == x || xcount == 1))
				ft_putchar('C');
			else if ((ycount == 1 || ycount == y) ||
	(xcount == 1 || xcount == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			xcount++;
		}
		ft_putchar('\n');
		ycount++;
	}
}
