/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:22:01 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/25 23:17:20 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_size(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ft_strlen(sep) * (size - 1);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;
	int		j;
	int		t;

	i = -1;
	t = 0;
	if (size == 0)
	{
		temp = malloc(1);
		return (temp);
	}
	temp = malloc(count_size(size, strs, sep));
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			temp[t++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			temp[t++] = sep[j++];
	}
	temp[t] = '\0';
	return (temp);
}
/*
int	main(void)
{
	char *test[3];
	test[0] = "hello";
	test[1] = "world";
	test[2] = "!";
	printf("%s", ft_strjoin(3, test, "-"));
	return (0);
}
*/
