#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int x;
	
	i = 0;
	while (i < (size/2))
	{
		x = tab[i];
		tab[i] = tab [size -1 - i];
		tab[size -1 - i] = x;
		i++;
	}
}

int main(void)
{
	int	tab[5];
	
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	printf(" %d\n %d\n %d\n %d\n %d\n fin\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_rev_int_tab(tab, 5);
	printf(" %d\n %d\n %d\n %d\n %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}

