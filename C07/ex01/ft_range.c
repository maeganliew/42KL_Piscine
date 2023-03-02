/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:55:22 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/02 13:44:49 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*
int	main(void)
{
	ft_range(39, 46);
}
*/
