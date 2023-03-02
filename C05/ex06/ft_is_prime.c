/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:52:12 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 22:26:12 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	int nb = 10;
	printf("%i", ft_is_prime(nb));
}
*/
