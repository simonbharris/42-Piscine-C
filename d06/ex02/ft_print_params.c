/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:00:26 by sharris           #+#    #+#             */
/*   Updated: 2018/05/22 16:00:28 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_params (int argc, char **args);

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

void	ft_print_params(int argc, char **args)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(args[i]);
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **args)
{
	ft_print_params(argc, args);
	return (0);
}
