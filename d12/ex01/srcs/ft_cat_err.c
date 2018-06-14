/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:25:39 by sharris           #+#    #+#             */
/*   Updated: 2018/05/31 15:25:40 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "../includes/ft.h"

void	ft_print_cat_err(char *argvstr)
{
	write(2, "cat: ", 5);
	write(2, argvstr, ft_strlen(argvstr));
	if (errno == ENOENT)
		write(2, ": No such file or directory\n", 28);
	else if (errno == EACCES)
		write(2, ": Permission denied\n", 20);
	else if (errno == EISDIR)
		write(2, ": Is a directory\n", 17);
}

void	iloop(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		write(1, &buf, 1);
	}
}
