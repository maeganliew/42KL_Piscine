/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:25:32 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/11 18:26:58 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_number(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7')
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '8')
	{	
		b = a + 1;
		while (b < '9')
		{	
			c = b + 1;
			while (c <= '9')
			{
				print_number(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
