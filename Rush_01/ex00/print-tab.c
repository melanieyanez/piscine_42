#include <unistd.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + 48);
		}
	}
}

void print2dArray(int **tab, int row, int col)
{
    int i;
    int j; 

    i = 0;
    j = 0;

    while (i < row)
    {
        while (j < col)
        {
            ft_putnbr(tab[i][j]);
            j++;
        }
        j = 0;
        write(1, "\n", 1);
        i++;
    }
    write(1, "\n=====\n", 8);
}