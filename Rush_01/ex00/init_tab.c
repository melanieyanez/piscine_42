#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*int **myinit_tab(int row, int col)
{
    int i;
    int j;
    int **tab;
    
    tab = malloc(sizeof(int*) * row);

    i = 0;
    while (i < row)
	{
        tab[i] = malloc(sizeof(int) * col);
		j = 0;
        while (j < col)
		{
            //tab[i][size - j] = tab[i][size - j];
            j++;
		}
        i++;
	}
    return tab;
}*/

/*
int	**ft_init_tab(int *str, int size)
{
	int	**tab;
	int		x;
	int		y;

	if (!(tab = malloc(size * sizeof(int*))))
		return (NULL);
	y = -1;
	while (++y < size)
	{
		if (!(tab[y] = malloc((size + 4) * sizeof(int))))
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
			tab[y][size + x] = str[2 * (y + x * size)] - '0';
	}
	return (tab);
}*/
int **createTab(int row, int col)
{
    // int count;
    int i;
    int *montab = malloc(col * sizeof(int));
    //int j;
    int** arr;
    arr = (int**)malloc(row * sizeof(int*));
    i = 0;
    while (i < row)
    {
        arr[i] = (int*)malloc(col * sizeof(int));
        i++;
    }
    return arr;
}
