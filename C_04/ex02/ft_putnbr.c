/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:39:51 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/08 14:10:53 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dispnbr(int i, int *tab)
{
	while (i >= 0)
	{
		ft_putchar(tab[i] + '0');
		i --;
	}
}

void	ft_putnbr(int nb)
{
	int	mod[11];
	int	i;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		i = 0;
		while (!(nb < 10))
		{
			mod[i] = nb % 10;
			nb = nb / 10;
			i ++;
		}	
		mod[i] = nb % 10;
		ft_dispnbr(i, mod);
	}
}

/*int	main(void)
{
	int	nb;

	nb = -2147448;
	ft_putnbr(nb);
}*/
