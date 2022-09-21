/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:10:01 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 18:57:41 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * - 1);
	return (nb);
}

int	*ft_range(int start, int end)
{
	int *tab;
	int	i;

	tab = malloc(sizeof(start) * ft_abs(end - start) + 1);

	if (start < end)
	{
		i = 0;
		while (start + i <= end)
		{
			tab[i] = start + i;
			i ++;
		}
	}

	if (start > end)
	{
		i = 0;
		while (start - i >= end)
		{
			tab[i] = start - i;
			i ++;
		}
	}
	return (tab);
}


int	main(void)
{
	int *tab;
	int i;

	tab = ft_range(-3, 0);

	i = 0;
	while (i != 5)
	{
		printf("%d\n", tab[i]);
		i ++;
	}
}	

