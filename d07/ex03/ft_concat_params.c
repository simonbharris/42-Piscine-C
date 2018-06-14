/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 21:29:47 by sharris           #+#    #+#             */
/*   Updated: 2018/05/23 21:29:48 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_concat_params(int argc, char **argv);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		sz;
	int		i;
	int		j;
	char	*str;
	int		w;

	j = 0;
	i = 1;
	w = 0;
	sz = 0;
	if (argc <= 1)
		return ((char *)malloc(0));
	while (i < argc)
		sz += ft_strlen(argv[i++]);
	str = (char *)malloc((sizeof(char) * sz) + 1);
	i = 1;
	while (argv[i])
	{
		ft_strcat(str, argv[i]);
		if (argv[i + 1])
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
