/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:00:26 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/19 16:06:12 by jialiew          ###   ########.fr       */
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
	j = argc - 1;
	while (j > 0 && argc != 0)
	{
		while (argv[j][i] != '\0')
		{
			print (argv[j][i]);
			i++;
		}
		print ('\n');
		j--;
		i = 0;
	}
	return (0);
}
