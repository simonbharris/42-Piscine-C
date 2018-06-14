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

#include <fcntl.h>
#include <stdlib.h>
#include "../includes/ft.h"
#include <errno.h>
#include <stdio.h>
#define BUF_SIZE 240000

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;

	if (argc <= 1 || argv[1][0] == '-')
		iloop();
	i = 0;
	while (argv[++i] && i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd == -1)
		{
			ft_print_cat_err(argv[i]);
		}
		else
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
	}
	return (0);
}
