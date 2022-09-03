/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:56:47 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/01 20:48:23 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	printf("X = %d et Y =  %d\n", x, y);
	ft_swap(&x, &y);
	printf("X = %d et Y =  %d\n", x, y);
	ft_swap(&x, &y);
}*/
