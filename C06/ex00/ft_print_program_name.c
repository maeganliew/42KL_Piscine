/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:43:45 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 10:27:05 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc != 0)
	{
		print(argv[0][i]);
		i++;
	}
	print('\n');
	return (0);
}
