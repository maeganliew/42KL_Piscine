/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:51:21 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/20 23:54:09 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main(void)
{
	int nb = 4;
	int	power = 2;
	printf("%d", ft_recursive_power(nb, power));
}
*/
