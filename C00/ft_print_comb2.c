/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:22:32 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/11 18:27:37 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum(int x, int y)
{
	char	ch1;
	char	ch2;
	char	ch3;
	char	ch4;

	ch1 = x / 10 + '0';
	ch2 = x % 10 + '0';
	ch3 = y / 10 + '0';
	ch4 = y % 10 + '0';
	write(1, &ch1, 1);
	write(1, &ch2, 1);
	write(1, " ", 1);
	write(1, &ch3, 1);
	write(1, &ch4, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		while (y < 100)
		{
			printnum(x, y);
			if (!(x == 98 && y == 99))
				write(1, ", ", 2);
		y++;
		}
		x++;
		y = x + 1;
	}
}
