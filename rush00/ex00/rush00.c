/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:14:58 by jkellehe          #+#    #+#             */
/*   Updated: 2018/05/19 16:59:48 by jkellehe         ###   ########.fr       */
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
			if ((ycount == 1 || ycount == y) && (xcount == 1 || xcount == x))
				ft_putchar('o');
			else if ((ycount == 1 || ycount == y))
				ft_putchar('-');
			else if (!(ycount == 1 || ycount == y)
					&& (xcount == 1 || xcount == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			xcount++;
		}
		ft_putchar('\n');
		ycount++;
	}
}
