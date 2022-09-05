/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 09:47:57 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/05 10:40:12 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < (size -1))
		{
			if (tab[j] > tab[j + 1])
			{
				c = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = c;
			}
			j ++;
		}
		i ++;
	}
}

/*int	main(void)
{
	int	tab[] = {41, 12, 87, 5, 2, 63};

	printf("%d %d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_sort_int_tab(tab, 6);
	printf("%d %d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
