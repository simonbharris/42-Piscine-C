/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 17:46:49 by sharris           #+#    #+#             */
/*   Updated: 2018/05/24 17:46:50 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split_whitespaces(char *str);

int		get_word_count(char *str)
{
	int i;
	int wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			wc++;
			i++;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
				if (str[i] == '\0')
					break ;
				else
					i++;
		}
		i++;
	}
	return (wc);
}

char	*get_current_word(char *str)
{
	int		i;
	char	*word;
	int		lc;

	i = 0;
	lc = 0;
	while (str[lc] != ' ' && str[lc] != '\t' && str[lc] != '\n' && str[lc])
	{
		lc++;
	}
	word = (char *)malloc(sizeof(char) * lc + 1);
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**final_str;
	int		wc;
	int		i;
	int		cur_wc;

	i = 0;
	wc = get_word_count(str);
	cur_wc = 0;
	final_str = (char **)malloc(sizeof(char *) * wc + 1);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			final_str[cur_wc] = get_current_word(&str[i]);
			cur_wc++;
			i++;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
				i++;
		}
		else
			i++;
	}
	final_str[cur_wc] = 0;
	return (final_str);
}
