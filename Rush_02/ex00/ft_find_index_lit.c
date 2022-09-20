/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index_lit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:51:25 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:51:35 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	ft_find_index_lit(char *src, char *chrch)
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
			return (i + ii + 2);
		i++;
	}
	return (0);
}
