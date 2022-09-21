/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index_nb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:50:37 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:50:48 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	ft_find_index_nb(char *src, char chrch)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (chrch == src[i])
			return (i + 3);
		i++;
	}
	return (0);
}
