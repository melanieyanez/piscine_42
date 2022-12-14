/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:04:35 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/10 11:03:40 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	int j;
	(void) argc;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = (((argv[1][i] - 97) + 13) % 26) + 97;
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = (((argv[1][i] -65) + 13) % 26) + 65;
		write(1, &argv[1][i], 1);
		i ++;
	}
	write(1, "\n", 1);
	return (0);
}
