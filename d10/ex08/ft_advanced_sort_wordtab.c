/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 04:18:31 by sharris           #+#    #+#             */
/*   Updated: 2018/05/29 04:18:32 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	char	*hold;
	int		i;
	int		j;

	i = -1;
	while (tab[++i] && tab[i + 1])
	{
		j = i;
		while (j > -1 && cmp(tab[j], tab[j + 1]) > 0)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				hold = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = hold;
			}
			j--;
		}
	}
}
