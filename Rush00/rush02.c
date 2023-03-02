#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int maxw, int maxh)
{
	int	w;
	int	h;

	h = 0;
	while (h < maxh)
	{
		w = 0;
		while (w < maxw)
		{
			if (h == 0 && (w == 0 || w == maxw -1))
				ft_putchar('A');
			else if (h == maxh -1 && (w == 0 || w == maxw -1))
				ft_putchar('C');
			else if (h > 0 && h < maxh -1 && w > 0 && w < maxw -1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			w++;
		}	
		write(1, "\n", 1);
		h++;
	}
}

int	main(void)
{
	rush(4, 4);
}
