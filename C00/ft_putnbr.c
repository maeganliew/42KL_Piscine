/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:55:25 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/11 18:21:17 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_num(int n)
{
	int	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	int	neg;
	int	recursed;
	int	printed;

	neg = 0;
	if (nb < 0)
		nb *= -1;
		neg = 1;
	if (nb < 10 && nb > 0)
	{
		if (neg == 1)
			write(1, "-", 1);
		print_num(nb);
		return ;
	}
	else
	{
		printed = nb % 10;
		recursed = nb / 10;
		ft_putnbr(recursed);
		print_num(printed);
	}
