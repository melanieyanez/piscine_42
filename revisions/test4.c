/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:37:54 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/02 14:11:55 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int	a;
	int	b;
	
	a = 0;
	b = 1;
	ft_swap(&a, &b);
	printf("a vaut %d et b vaut %d\n", a, b);
	ft_swap(&a, &b);
	printf("a vaut %d et b vaut %d", a, b);
	return (0);
}
