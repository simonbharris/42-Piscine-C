/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:14:58 by jkellehe          #+#    #+#             */
/*   Updated: 2018/05/20 15:08:06 by jkellehe         ###   ########.fr       */
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
			if ((ycount == 1 & xcount == 1) ||
				(xcount == x & ycount == y & (ycount || xcount) != 1))
				ft_putchar('/');
			else if ((ycount == 1 & xcount == x) || (xcount == 1 & ycount == y))
				ft_putchar('\\');
			else if ((ycount == 1 || ycount == y) ||
	(!(ycount == 1 || ycount == y) && (xcount == 1 || xcount == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			xcount++;
		}
		ft_putchar('\n');
		ycount++;
	}
}
