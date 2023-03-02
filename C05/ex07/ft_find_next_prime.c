/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:27:39 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 00:45:11 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	prime;

	prime = 0;
	if (nb == 1)
		return (0);
	if (nb == 2147483647)
		return (2147483647);
	while (prime == 0 && nb < 2147483647)
	{
		prime = 1;
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				prime = 0;
			i++;
		}
		if (prime == 0)
			nb++;
	}
	return (nb);
}

/*
int main(void)
{
    int	nb = 2147483629;
	printf("%i", ft_find_next_prime(nb));
}
*/
