/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:29:45 by sharris           #+#    #+#             */
/*   Updated: 2018/05/22 14:31:33 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_program_name(char **args);

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

void	ft_print_program_name(char **args)
{
	ft_putstr(args[0]);
	ft_putchar('\n');
}

int		main(int argc, char **args)
{
	argc = 0;
	ft_print_program_name(args);
	return (0);
}
