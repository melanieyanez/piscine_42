/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_ten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:49:14 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 19:35:10 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

void	extension(char *dict, int nb, int objectif, int line)
{
	while (dict[nb] != '\0')
	{
		if (dict[nb] == '\n')
		{
			line = nb + 1;
		}
		if (to_end_rel(dict, line) == objectif)
			break ;
		nb++;
	}
	if (dict[line] != '0')
	{
		putstrns(dict, line + objectif + 2);
		write (1, " ", 1);
	}
}

void	which_ten(char *dict, int objectif, char c)
{
	int		nb;
	int		line;
	int		i;
	char	*tmp;

	nb = 0;
	line = 0;
	i = 0;
	if (objectif == 2)
	{
		tmp = malloc(sizeof (char) * 2);
		tmp[0] = c;
		tmp[1] = '0';
		putstr(dict, ft_find_index_lit(dict, tmp));
		return ;
	}
	extension(dict, nb, objectif, line);
}
