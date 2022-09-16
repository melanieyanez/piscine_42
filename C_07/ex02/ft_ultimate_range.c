/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:26:05 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 13:56:18 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*void	print2dtab(int **tab, int row, int col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < col)
		{
			printf("%d\n", tab[i][j]);
			j ++;
		}
		j = 0;
		printf("\n");
		i ++;
	}
	printf("\n");
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i ++;
	}
	range[0] = tab;
	return (i);
}

/*int	main(void)
{
	int	*ptr;
	int	**ptr_ptr;
	
	ptr = NULL;
	ptr_ptr = &ptr;
	printf("%d\n", ft_ultimate_range (ptr_ptr, 3978, -2896));
	printf("%d\n", ft_ultimate_range (ptr_ptr, -242, -242));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 2147483647, 1927));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 0, 0));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 0, 1));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 0, 166));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 15, 166));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 16, 17));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 0, 2));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 1, 4));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 3, 7));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 4, 8));
	printf("%d\n", ft_ultimate_range (ptr_ptr, 5, 13));
	printf("%d\n", ft_ultimate_range (ptr_ptr, -8, 15));
	printf("%d\n", ft_ultimate_range (ptr_ptr, -3, 18));
	printf("%d\n", ft_ultimate_range (ptr_ptr, -1, 19));
}*/
