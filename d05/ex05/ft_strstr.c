/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:20:44 by sharris           #+#    #+#             */
/*   Updated: 2018/05/21 19:20:46 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i_match;
	int start_of_match;

	i = 0;
	i_match = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i_match])
		{
			start_of_match = i;
			while (str[i] == to_find[i_match])
			{
				i++;
				i_match++;
				if (to_find[i_match] == '\0')
					return (&str[start_of_match]);
			}
			i_match = 0;
		}
		i++;
	}
	return (0);
}
