/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 23:41:03 by sharris           #+#    #+#             */
/*   Updated: 2018/05/17 23:35:34 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int i;
	int j;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if (i != 98)
				ft_putchar(',');
			if (i != 98)
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
