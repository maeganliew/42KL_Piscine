/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:36:12 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/01 15:51:44 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		n;
	char	*temp;

	i = -1;
	n = 0;
	while (tab[n])
		n++;
	while (++i < n - 1)
	{
		j = -1;
		while (++j < n - i - 1)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}
/*
#include <stdio.h>

int main(void)
{
	int	i;
	i = 0;

	char *str1[] = {"app9", "app2", "app5", "app4", "app3", NULL};

	ft_advanced_sort_string_tab(str1);
	while (str1[i] != NULL)
	{
		printf("%s\n", str1[i]);
		i++;
	}
	return (0);
}
*/
