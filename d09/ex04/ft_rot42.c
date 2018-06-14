/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:45:03 by sharris           #+#    #+#             */
/*   Updated: 2018/05/25 16:38:46 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_rot_char(char c);

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_rot_char(str[i]);
		i++;
	}
	return (str);
}

char	ft_rot_char(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 42 - 26;
		if (c > 'Z')
			c -= 26;
	}
	if (c >= 'a' && c <= 'z')
	{
		if ((int)c + 42 - 26 > 127)
			c = c + (42 - 26 - 26);
		else
			c = c + 42 - 26;
		if (c > 'z')
			c -= 26;
	}
	return (c);
}
