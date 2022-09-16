/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:45:42 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/16 10:52:32 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_show_tab(struct s_stock_str *par);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_dispnbr(int i, int *tab)
{
	i = 0;
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	printf("ICI %s %s \n", par[0].str, par[0].copy);

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i ++;
	}
}


int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (src[size])
		size ++;
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if(!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*super_tab;

	super_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!super_tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		super_tab[i].size = ft_strlen(av[i]);
		super_tab[i].str = av[i];
		super_tab[i].copy = ft_strdup(av[i]);
		printf("pointeur %p chaine %s ", super_tab[i].copy, super_tab[i].copy);
		printf("pointeur %p chaine %s\n", super_tab[i].str, super_tab[i].str);
		i ++;
	}
	super_tab[i].str = 0;
	super_tab[i].size = 0;
	super_tab[i].copy = 0;

	return (super_tab);
}

int	main(void)
{	
	char	*tab[5];
	struct s_stock_str *awesome_tab;

	tab[0] = "aaa"; 
	tab[1] = "bbb";
	tab[2] = "ccc";
	tab[3] = "ddd";
	tab[4] = "eee";

	awesome_tab = ft_strs_to_tab(5, tab);
	//printf("%s\n", awesome_tab[1].copy);
	ft_show_tab(awesome_tab);
	
	return (0);
}
