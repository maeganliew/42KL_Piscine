/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:29:38 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 00:47:32 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{		
			result *= nb;
			power--;
		}
	}
	return (result);
}

/*
int	main(void)
{
	int nb;
	int power;

	nb = 10;
	power = 4;
	printf("%i", ft_iterative_power(nb, power));
}
*/
