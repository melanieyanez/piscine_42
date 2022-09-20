/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:49:50 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:50:06 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	ft_find_index(char *src, char *chrch)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (src[i])
	{
		while (chrch[ii])
		{
			if (chrch[ii] == src[i + ii])
				ii++;
			else
			{
				ii = 0;
				break ;
			}
		}
		if (chrch[ii] == '\0')
			return (i);
		i++;
	}
	return (0);
}
