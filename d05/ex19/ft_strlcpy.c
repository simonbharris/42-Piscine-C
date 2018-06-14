/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 03:44:08 by sharris           #+#    #+#             */
/*   Updated: 2018/05/22 03:44:09 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	int				di;
	int				src_len;
	unsigned int	si;

	i = 0;
	di = 0;
	si = 0;
	src_len = 0;
	while (dest[di] != '\0')
		di++;
	if (size == 0)
		return (di);
	while (src[src_len] != '\0')
		src_len++;
	while (src[si] != '\0' && si + 1 < size)
	{
		dest[si] = src[si];
		si++;
	}
	dest[si] = '\0';
	return (src_len);
}
