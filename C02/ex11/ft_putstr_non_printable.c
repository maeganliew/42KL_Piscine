/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:39:52 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/15 14:54:09 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change_hex(char n)
{
	char	*hex;
	int		left;
	int		right;

	hex = "0123456789abcdef";
	left = n / 16;
	right = n % 16;
	write(1, "\\", 1);
	write(1, &hex[left], 1);
	write(1, &hex[right], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{	
			change_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
