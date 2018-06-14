/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 18:53:39 by sharris           #+#    #+#             */
/*   Updated: 2018/05/22 18:53:41 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);
int		ft_check_base(char *base);
void	ft_print_base(int *final_nbr, int is_neg, int i, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int final_nbr[100];
	int sz_base;
	int is_neg;

	i = 0;
	sz_base = 0;
	if (!ft_check_base(base))
		return ;
	while (base[sz_base])
		sz_base++;
	if (nbr < 0)
		is_neg = 1;
	while (nbr != 0)
	{
		final_nbr[i] = nbr % sz_base;
		nbr = nbr / sz_base;
		i++;
	}
	ft_print_base(final_nbr, is_neg, i, base);
}

void	ft_print_base(int *final_nbr, int is_neg, int i, char *base)
{
	if (is_neg == 1)
	{
		ft_putchar('-');
		while (--i >= 0)
			ft_putchar(base[-(final_nbr[i])]);
	}
	while (--i >= 0)
		ft_putchar(base[final_nbr[i]]);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] >= 127)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}
