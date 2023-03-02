/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:09:38 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/20 22:57:47 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
