/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:32:43 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 12:20:50 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_putnbr(int nb)
{
	int mod[11];
	int	i;
	char	c;

	i = 0;
	while (nb >= 10)
	{
		mod[i]= nb % 10;	
		nb = nb / 10;
		i ++;
	}
	
	mod[i] = nb % 10;

	while (i >= 0)
	{
		c = mod[i] + '0';
		write (1, &c, 1);
		i --;
	}
	write(1, "\n", 1);
}

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
			ft_putnbr(i);
		i ++;
	}
}
