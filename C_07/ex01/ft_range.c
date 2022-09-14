/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:32:55 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/13 11:35:13 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(*tab) * (max - min));
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i ++;
	}
	return (tab);
}

/*int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(12, 42);
	i = 0;
	while (i < 33)
	{
		printf("%d\n", tab[i]);
		i ++;
	}
	printf("%p\n", ft_range(12, 42));
}*/
