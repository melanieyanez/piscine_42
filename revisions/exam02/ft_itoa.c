/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:36:14 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/16 15:00:17 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	nbr_len(int nbr)
{
	int n;
	int size;
	
	n = nbr;
	if (n > 0)
	{
		size = 1;
		while (n >= 10)
		{
			n = n / 10;
		   	size ++;	
		}
	}
	if (n <  0)
	{
		n = n * -1;
		size  = 2;
		while (n >= 10)
		{
			n = n / 10;
			size ++;
		}
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int i;
	int	size;

	size = nbr_len(nbr);

	str = malloc(sizeof(str) * (size + 1));
		
	i = nbr_len(nbr) - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	
	while (nbr >= 10)
	{
		str[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i --;
	}
	str[i] = nbr + 48;
	str[size] = '\0';	
	return (str);	
}

int	main(void)
{
	int	nbr;

	nbr = -154625;
	printf("%s\n", ft_itoa(nbr));
	printf("%d\n", nbr_len(nbr));
}
