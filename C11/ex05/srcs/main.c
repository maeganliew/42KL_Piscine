/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:40:52 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/01 22:28:24 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	error_msg(int j, int k)
{
	if (k == 0 && j == 3)
		write (1, "Stop : modulo by zero", 21);
	else if (k == 0 && j == 4)
		write (1, "Stop : division by zero", 24);
	else if (j == -1)
		write (1, "0", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	(*func_array[5])(int i, int k);

	func_array[0] = &addition;
	func_array[1] = &subtraction;
	func_array[2] = &multiplication;
	func_array[3] = &modulo;
	func_array[4] = &division;
	if (argc == 4)
	{
		i = ft_atoi(argv[1]);
		j = operators(argv[2]);
		k = ft_atoi(argv[3]);
		if (k == 0 && (j == 3 || j == 4))
			error_msg(j, k);
		else if (j == -1)
		{
			write (1, "0", 1);
			return (0);
		}
		ft_putnbr(func_array[j](i, k));
	}
	return (0);
}
