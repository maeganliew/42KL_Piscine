/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:22:04 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/14 15:40:06 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	char	*test;

	test = str;
	if (*test == '\0')
	{
		return (1);
	}
	while (*test != '\0')
	{
		if (*test < 'A' || *test > 'Z')
		{
			return (0);
		}	
		test++;
	}
	return (1);
}
