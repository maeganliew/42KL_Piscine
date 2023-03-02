/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:34:28 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/01 23:45:01 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	status;

	i = 0;
	status = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			status++;
		i++;
	}
	if (status == length - 1)
		return (1);
	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
