/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:29:28 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/01 15:52:11 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		n;
	char	*temp;

	n = 0;
	while (tab[n])
		n++;
	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - 1)
		{
			if (compare(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
	int	i;
	i = 0;

	char *str1[] = {"app9", "app2", "app5", "app4", "app3", NULL};
	
	ft_sort_string_tab(str1);
	while (str1[i] != NULL)
	{
		printf("%s\n", str1[i]);
		i++;
	}
	return (0);
}
*/
