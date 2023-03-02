/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:50:48 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/23 22:14:15 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		n;
	int		i;

	n = 0;
	i = 0;
	if (src == NULL)
		return (0);
	while (src[n] != '\0')
		n++;
	copy = malloc(n * sizeof (char) + 1);
	if (copy == NULL)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
int	main(void)
{
	ft_strdup("");
}
*/
