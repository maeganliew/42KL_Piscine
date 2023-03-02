/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:14:57 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/27 16:17:20 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}
