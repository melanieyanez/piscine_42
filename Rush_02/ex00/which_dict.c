/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:52:44 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 21:39:10 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

void	which_dict(char *path_dict, char *value)
{
	char	*dict;

	dict = parse(path_dict);
	if (dict == 0)
		return ;
	putnbr(dict, value, 0);
	free(dict);
}
