/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:51:45 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:58:11 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

char	*parse(char *file_path)
{
	int		file;
	int		i;
	char	*parsed;
	char	buffer;

	parsed = malloc(dictlen(file_path));
	file = open(file_path, O_RDONLY);
	i = 0;
	if (file == -1)
	{
		return (0);
	}
	while (read(file, &buffer, 1) != 0)
	{
		parsed[i] = buffer;
		i++;
	}
	close(file);
	return (parsed);
}
