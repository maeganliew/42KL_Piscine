/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:44:04 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/14 15:39:26 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	*test;

	test = str;
	if (*test == '\0')
		return (1);
	while (*test != '\0')
	{
		if (*test < 'a' || *test > 'z')
		{
			return (0);
		}
		test++;
	}
	return (1);
}
