/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:26:05 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/14 13:08:59 by myanez-p         ###   ########.fr       */
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

	tab = malloc(sizeof(*tab) * (max - min));
	if (min >= max)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i ++;
	}
	range[0] = tab;
	if (!*tab)
		return (-1);
	return (i);
}

/*int	main(void)
{
	int	*ptr;
	int	**ptr_ptr;
	
	ptr = NULL;
	ptr_ptr = &ptr;
	printf("%d\n", ft_ultimate_range (ptr_ptr, 12, 45));
}*/
