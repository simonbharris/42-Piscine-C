/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:41:28 by sharris           #+#    #+#             */
/*   Updated: 2018/05/22 16:41:30 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_params(int argc, char **args);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
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

void	ft_sort_params(int argc, char **args)
{
	char	*hold;
	int		i;
	int		j;

	i = 2;
	while (i - 1 < argc - 1)
	{
		j = i;
		while (j > 1 && ft_strcmp(args[j], args[j - 1]) < 0)
		{
			hold = args[j];
			args[j] = args[j - 1];
			args[j - 1] = hold;
			j--;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(args[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **args)
{
	ft_sort_params(argc, args);
	return (0);
}
