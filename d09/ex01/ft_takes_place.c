/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 04:23:50 by sharris           #+#    #+#             */
/*   Updated: 2018/05/25 04:23:52 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_convert_time(int *hour);

void	ft_takes_place(int hour)
{
	int		houry;
	char	*strx;
	char	*stry;

	if (hour > 24)
		hour = 0;
	houry = hour + 1;
	strx = ft_convert_time(&hour);
	stry = ft_convert_time(&houry);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d:00 %s AND %d:00 %s",
		hour, strx, houry, stry);
}

char	*ft_convert_time(int *hour)
{
	if (*hour >= 24)
		*hour -= 24;
	if (*hour >= 12)
	{
		if (*hour != 12)
			*hour -= 12;
		return ("P.M.");
	}
	else
	{
		if (*hour == 0)
			*hour = 12;
		return ("A.M.");
	}
}
