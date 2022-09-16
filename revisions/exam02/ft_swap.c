/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:31:22 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 10:35:40 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int a;
	int b;
	
	a = 1;
	b = 5;

	printf("AVANT a est egal a %d et b a %d\n", a, b);
	ft_swap(&a, &b);
	printf("APRES a est egal a %d et b a %d\n", a, b);
}
