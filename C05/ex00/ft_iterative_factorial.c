/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:59:57 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 22:09:23 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (num > 1)
	{
		nb *= (num - 1);
		num--;
	}
	return (nb);
}

/*
int	main(void)
{
	int	nb;

	nb = 0;
	printf("%i", ft_iterative_factorial(nb));
}
*/
