/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:23:56 by sharris           #+#    #+#             */
/*   Updated: 2018/05/22 16:24:03 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_rev_params(int argc, char **args);

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

void	ft_rev_params(int argc, char **args)
{
	while (argc > 1)
	{
		ft_putstr(args[argc - 1]);
		argc--;
		ft_putchar('\n');
	}
}

int		main(int argc, char **args)
{
	ft_rev_params(argc, args);
	return (0);
}
