/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:15:13 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 00:04:15 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	m;

	m = 0;
	if (nb < 0)
		return (0);
	while (m <= 46340)
	{
		if (m * m == nb)
			return (m);
		m++;
	}
	return (0);
}

/*
int main(void)
{
	int	nb = 64;
	printf("%i", ft_sqrt(nb));
}
*/
