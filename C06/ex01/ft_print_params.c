/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:47:31 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/21 10:29:07 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argc != 0 && j < argc)
	{
		while (argv[j][i] != '\0')
		{
			print (argv[j][i]);
			i++;
		}
		print ('\n');
		j++;
		i = 0;
	}
	return (0);
}
