/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_zero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:53:11 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:53:21 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

void	print_zero(char *path_dict)
{
	char	*dict;

	dict = parse(path_dict);
	putstr(dict, ft_find_index_nb(dict, '0'));
	write(1, "\n", 1);
}
