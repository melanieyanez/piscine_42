/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_end_rel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:47:08 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:47:22 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	to_end_rel(char *dict, int place)
{
	int	i;
	int	r;

	i = place;
	r = 0;
	while (dict[i] != ':' && dict[i] != ' ' && dict[i])
	{
		i++;
		r++;
	}
	return (r);
}
