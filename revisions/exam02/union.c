/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:06:12 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 16:23:11 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double(char *str, char c, int i)
{
	int j;

	j = i - 1;
	while (j != - 1)
	{
		if (c == str[j])
			return (1);
		j --;
	}
	return (0);	
}

int	check_double_both(char *str1, char *str2, int i)
{
	int	j;

	j = 0;
	while(str1[j])
	{
		if (str2[i] == str1[j])
			return (1);
		j ++;
	}
	return (0);
}

int main (int argc, char *argv[])
{	
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (check_double(argv[1], argv[1][i], i) == 0)
				write(1, &argv[1][i], 1);
			i ++;
		}

		j = 0;
		while (argv[2][j])
		{
			if (check_double(argv[2], argv[2][j], j) == 0 && check_double_both(argv[1], argv[2], j) == 0) 
				write(1, &argv[2][j], 1);
			j ++;
		}
		
	}
	write(1, "\n", 1);
}
