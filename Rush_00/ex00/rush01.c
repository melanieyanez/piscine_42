/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:35:40 by abarras           #+#    #+#             */
/*   Updated: 2022/09/03 14:36:17 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char chat);
void	rushx(int x);
void	rushy(int x, int y);

void	rush00(int x, int y)
{
	if (!(x == 0 || y == 0))
	{
		rushx(x);
		rushy(x, y);
	}
}

void	rushx(int x)
{
	int	c;

	c = x;
	x = x - 2;
	ft_putchar('/');
	while (x > 0)
	{
		ft_putchar('*');
		x--;
	}
	if (c > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	rushx2(int x)
{
	int	c;

	c = x;
	x = x - 2;
	ft_putchar('\\');
	while (x > 0)
	{
		ft_putchar('*');
		x--;
	}
	if (c > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rushy(int x, int y)
{
	int	c;
	int	d;

	c = x;
	d = y;
	y = y - 2;
	while (y > 0)
	{
		x = c - 2;
		ft_putchar('*');
		while (x > 0)
		{
			ft_putchar(' ');
			x--;
		}
		if (c > 1)
			ft_putchar('*');
		ft_putchar('\n');
		y--;
	}
	if (d > 1)
		rushx2(c);
}
