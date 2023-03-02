/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:00:14 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/19 15:31:48 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	keycount;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		keycount = 0;
		if (to_find[keycount] == str[i + keycount] && str[i + keycount] != '\0')
				keycount++;
		if (to_find[keycount] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char c[] = "hello world";
	char d[] = "wor";

	printf("%s", ft_strstr(c, d));
}
*/
