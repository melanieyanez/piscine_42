/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:45:04 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 21:45:57 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

void	putstr(char *str, int n)
{
	int	i;

	i = n;
	while (str[i] != '\n' && str[i])
	{
		if (str[i] != ' ' && str[i] != ':')
			write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
}

void	putstrn(char *str, int n)
{
	int	i;

	i = n;
	while (str[i] != '\n' && str[i])
	{
		if (str[i] != ' ' && str[i] != ':')
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	putstrns(char *str, int n)
{
	int	i;

	i = n;
	while (str[i] != '\n' && str[i])
	{
		if (str[i] != ' ' && str[i] != ':')
			write(1, &str[i], 1);
		i++;
	}
}

void	mini_put(char *dict, char *str, int tmp, int i)
{
	putstr(dict, ft_find_index_nb(dict, str[i]));
	if (tmp != 1)
		which_ten(dict, tmp, str[i]);
}
