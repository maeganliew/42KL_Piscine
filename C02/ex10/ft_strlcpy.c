/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:54:44 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/15 14:50:54 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sz;

	i = 0;
	sz = 0;
	if (size < 1)
		return (sz);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[sz])
	{
		sz++;
	}
	dest[i] = '\0';
	return (sz);
}
