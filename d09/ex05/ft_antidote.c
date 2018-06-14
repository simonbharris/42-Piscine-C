/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:46:50 by sharris           #+#    #+#             */
/*   Updated: 2018/05/25 17:00:53 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_antidote(int i, int j, int k)
{
	int sort[3];
	int hold;
	int x;
	int y;

	x = 0;
	sort[0] = i;
	sort[1] = j;
	sort[2] = k;
	while (x < 3)
	{
		y = x + 1;
		while (y < 3)
		{
			if (x > y)
			{
				hold = sort[x];
				sort[x] = sort [y];
				sort[y] = hold;
			}
			y++;
		}
		x++;
	}
	printf("%d", sort[0], sort[1], sort[2]);
	return (sort[1]);
}

int main(void)
{
	printf("%d", ft_antidote(5, 2, 3));
return (0);
}	
