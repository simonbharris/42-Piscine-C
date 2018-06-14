/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 22:16:44 by sharris           #+#    #+#             */
/*   Updated: 2018/05/17 23:23:37 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 97;
	while (i < 123)
	{
		c = i;
		ft_putchar(i);
		i++;
	}
}
