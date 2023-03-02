/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:49:49 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/28 11:16:28 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

/*
typedef struct s_stock_str
{
	int	size;
	char *str;
	char *copy;
}	t_stock_str;
*/

int	get_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*str_copy(char *s, int n)
{
	char	*temp;
	int		i;

	i = 0;
	temp = NULL;
	if (s == NULL)
		return (NULL);
	temp = malloc(sizeof(char) * (n + 1));
	if (!temp)
		return (NULL);
	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

void	set_value(struct s_stock_str *temp, int i)
{
	temp[i].size = 0;
	temp[i].str = 0;
	temp[i].copy = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*temp;
	int					i;
	int					n;

	i = -1;
	temp = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (temp == NULL)
		return (NULL);
	while (++i < ac)
	{
		if (av[i] == 0)
		{
			n = i;
			while (n--)
				free((temp + n)->copy);
			free(temp);
			return (0);
		}
		temp[i].size = get_strlen(av[i]);
		temp[i].str = av[i];
		temp[i].copy = str_copy(av[i], (temp[i].size));
	}
	set_value(temp, i);
	return (temp);
}
