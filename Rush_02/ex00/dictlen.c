/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:44:08 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 21:55:22 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	dictlen(char *file_path)
{
	int		file;
	int		i;
	char	buffer;

	file = open(file_path, O_RDONLY);
	i = 0;
	if (file == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	while (read(file, &buffer, 1) != 0)
		i++;
	close(file);
	return (i);
}
