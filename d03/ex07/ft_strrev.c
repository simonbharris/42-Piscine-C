/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:04:45 by sharris           #+#    #+#             */
/*   Updated: 2018/05/18 22:37:06 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	c;

	while (str[len] != '\0')
		len++;
	while (i <= len)
		c = str[i];
	str[i] = str[len - 1];
	str[len - 1] = c;
	i++;
	return (str);
}
