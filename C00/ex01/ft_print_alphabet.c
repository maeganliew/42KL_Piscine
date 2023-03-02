/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:57:43 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/12 17:40:09 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c < '{')
	{
		write(1, &c, 1);
		c++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
}
*/
