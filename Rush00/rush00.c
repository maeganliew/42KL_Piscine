#include<unistd.h>
#include"ft_putchar.c"
void	ft_putchar(char c);

void	rush00(int maxw, int maxh)
{
	int	w;
	int	h;

	h = 0;
	while (h < maxh)
	{
		w = 0;
		while (w < maxw)
		{
			if ((h == 0 || h == maxh - 1) && w == 0)
				ft_putchar('o');
			else if ((h == 0 || h == maxh - 1) && w == maxw - 1)
				ft_putchar('o');
			else if (h > 0 && h < maxh - 1 && w > 0 && w < maxw - 1)
				ft_putchar(' ');
			else if (h > 0 && h < maxh - 1 && (w == 0 || w ==  maxw - 1))
				ft_putchar('|');
			else
				ft_putchar('-');
			w++;
		}
		write(1, "\n", 1);
		h++;
	}
}
