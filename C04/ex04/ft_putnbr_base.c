/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:54:47 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/16 20:17:41 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(char c)
{
	write (1, &c, 1);
}

int	repeat_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		i = j + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_num(int nbr, int i, char *base)
{
	long	nbrlong;

	nbrlong = nbr;
	if (nbrlong < 0)
	{
		nbrlong *= -1;
		printing('-');
	}
	if (nbrlong >= i)
		print_num(nbrlong / i, i, base);
	printing(base[nbrlong % i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	if (i < 2)
		return ;
	if (repeat_check(base))
		return ;
	print_num(nbr, i, base);
}
