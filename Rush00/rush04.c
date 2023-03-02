/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junng <junng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:18:10 by junng             #+#    #+#             */
/*   Updated: 2023/02/11 21:22:05 by junng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char n)
{
    write(1, &n, 1);
}

void    rush04(int MaxW, int MaxH)
{
    int w;
    int h;

	w = 1;
    h = 1;
    while (h <= MaxH)
	{
        while (w <= MaxW)
        {
            if ((h == 1 && w == 1) || (h == MaxH && w == MaxW))
                ft_putchar('A');
            else if ((h == 1 && w == MaxW) || (h == MaxH && w == 1))
                ft_putchar('C');
            else if ((h > 1 && h < MaxH) && (w > 1 && w < MaxW))
                ft_putchar(' ');
            else
                ft_putchar('B');
            w++;
        }
        h++;
        write(1, "\n", 1);
        w = 1;
    }
}

int main(void)
{
	rush04(9, 9);
	return (0);
}
