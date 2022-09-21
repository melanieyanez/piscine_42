/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:36:34 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 16:04:44 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_before(char *str, char c, int p)
{
	int i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

int	check_both(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (argv[1][i])
	{
		if (check_before(argv[1], argv[1][i], i) == 0)
			write(1, &argv[1][i], 1);
		i ++;
	}

	j = 0;
	while (argv[2][j])
	{
		if (check_before(argv[2], argv[2][j], j) == 0 && check_both(argv[1], argv[2][j]) == 0)
			write(1, &argv[2][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
