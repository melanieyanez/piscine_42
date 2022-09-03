/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:00:23 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/01 15:50:57 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	if_function(char a, char b, char c, char d)
{
	if ((a < c) || ((a == c) && (b < d)))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (!((a == '9') && (b == '8') && (c == '9') && (d == '9')))
			ft_putchar(',');
	}
}

void	ft_print_comb1(char a, char b)
{
	char	c;
	char	d;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if_function(a, b, c, d);
			d++;
		}
		c++;
	}	
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_print_comb1(a, b);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
