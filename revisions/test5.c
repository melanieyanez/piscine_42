/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:12:17 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/02 15:12:10 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_swap(int *a, int	*b)
{
	int	c;

	*a = *b;
	*b = c;
}

char	*ft_strrev(char	*str)
{
	int	count;
	
	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	printf("le nombre de caracteres de ma chaine est %d", count);

	
	int x;
	int y;
	
	x = 0;
	y = count / 2;
	while (y != 0)
	{
		ft_swap(str[x], str[y]);
		x++;
		y--;
	}
	
	return (str);
}

int	main()
{
	char	*a;
	
	a = "abcdefghijklmnopqrstuvwxyz";
	ft_strrev(a);
	return (0);
}
