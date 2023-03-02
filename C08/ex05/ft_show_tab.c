/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:52:15 by jialiew           #+#    #+#             */
/*   Updated: 2023/02/27 20:54:25 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print(str[i]);
		i++;
	}
	print('\n');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		print('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb <= 9)
		print(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	print('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
#include <stdio.h>

int    main(void)
{
    char        *str[3] = {"low", "STR45", "STR6789"};
    int            n;
    t_stock_str    *i;

    i = ft_strs_to_tab(3, str);
    n = 0;
    ft_show_tab(i);
    while (n < 4)
    {
        printf("t_stock_str  -> size: %d\n", (i + n)->size);
        printf("t_stock_str  -> str : %s\n", (i + n)->str);
        printf("t_stock_str  -> copy: %s\n", (i + n)->copy);
        n++;
    }
    return (0);
}
*/
