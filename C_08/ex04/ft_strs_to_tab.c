/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:45:42 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/19 11:05:39 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_show_tab(struct s_stock_str *par);

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
	if (!dest)
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
		i ++;
	}
	super_tab[i].str = 0;
	super_tab[i].size = 0;
	super_tab[i].copy = 0;
	return (super_tab);
}

/*int	main(void)
{	
	char	*tab[1];
	struct s_stock_str *awesome_tab;

	tab[0] = "uCWcsCOnLuETt9Dzha3zcEZk8tCq1A"; 
	//tab[1] = "@JMeZEVaa";
	//tab[2] = "uCWcsCOnLuETt9Dzha3zcEZk8tCq1A";
	//tab[3] = "ddd";
	//tab[4] = "eee";

	awesome_tab = ft_strs_to_tab(1, tab);
	ft_show_tab(awesome_tab);
	
	return (0);
}*/
