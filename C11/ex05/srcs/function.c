/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:49:58 by jialiew           #+#    #+#             */
/*   Updated: 2023/03/01 15:53:17 by jialiew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (neg % 2)
		return (-result);
	return (result);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		nb = 147483648;
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	operators(char *op)
{
	if (ft_strlen(op) != 1)
		return (-1);
	else if (*op == '+')
		return (0);
	else if (*op == '-')
		return (1);
	else if (*op == '*')
		return (2);
	else if (*op == '%')
		return (3);
	else if (*op == '/')
		return (4);
	return (-1);
}
