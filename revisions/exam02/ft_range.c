/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:51:55 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/16 12:36:02 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

int	*ft_range(int start, int end)
{
	int *tab;
	int	i;
	
	tab = malloc(sizeof(tab) * ft_abs(end - start) + 1);
	if (!tab)
		return (NULL);

	i = 0;
	if (start < end)
	{
		while (i + start <= end)
		{
			tab[i] = i + start;
			i ++;
		}
	}

	if (end < start)
	{
		while (i < ft_abs(end - start) + 1)
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
	int i = 0;
	int start = 3;
	int end = 18;
	
	tab = ft_range(start, end);
	while (i < ft_abs(end - start) + 1)
	{
		printf("%i ", tab[i]);
		i ++;
	}
}
