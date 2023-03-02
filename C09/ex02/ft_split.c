/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:10:16 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/26 21:35:17 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_in_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_length(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (str[i + j] != '\0' && char_in_sep(str[i + j], charset) == 0)
		j++;
	return (j);
}

int	str_count(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && char_in_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			nb++;
		while (str[i] != '\0' && char_in_sep(str[i], charset) == 0)
			i++;
	}
	return (nb);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	i = 0;
	j = 0;
	array = malloc(str_count(str, charset) * (sizeof(char *) + 1));
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] != '\0' && char_in_sep(str[i], charset) == 1)
			i++;
		if (str[i] == '\0')
			break ;
		array[j] = malloc(sizeof(char) * (count_length(str, charset, i) + 1));
		while (str[i] != '\0' && char_in_sep(str[i], charset) == 0)
			array[j][k++] = str[i++];
		array[j][k] = '\0';
		j++;
	}
	array[j] = 0;
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	char *c = "       ";
	char *t = "  ";
	char **array = ft_split(c, t);

	while (array[i])
	{
		printf("%s", array[i]);
		i++;
	}
	return (0);
}

void    print_array(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        printf("%s\n", array[i]);
        i++;
    }
}

int     main(void)
{
    char **array;

    array = ft_split("         ", " ");
    printf("Actual output:\n");
    print_array(array);
    free(array);

    array = ft_split("Hello;World!people;", ";!");
    printf("Actual output:\n");
    print_array(array);
    free(array);

    array = ft_split("Split$$this$$string$$with$$double$$dollar", "$$");
    printf("Actual output:\n");
    print_array(array);
    free(array);

    return (0);
}
*/
