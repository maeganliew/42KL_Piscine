/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:24:38 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/14 23:06:05 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	p;
	int	q;

	p = 0;
	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	while (src[p] != '\0')
	{
		dest[q] = src[p];
		q++;
		p++;
	}
	dest[q] = '\0';
	return (dest);
}
