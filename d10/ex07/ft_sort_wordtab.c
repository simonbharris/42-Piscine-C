/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:10:38 by sharris           #+#    #+#             */
/*   Updated: 2018/05/28 22:10:39 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

void	ft_sort_wordtab(char **tab)
{
	char	*hold;
	int		i;
	int		j;

	i = -1;
	while (tab[++i] && tab[i + 1])
	{
		j = i;
		while (j > -1 && ft_strcmp(tab[j], tab[j + 1]) > 0)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				hold = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = hold;
			}
			j--;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
