/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:22 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 14:35:00 by myanez-p         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{	
					if (check_double(argv[1], argv[1][i], i) == 0)
					{
						write(1, &argv[1][i], 1);
						break;
					}		
				}
				j ++;
			}
			i ++;
		}
		write(1, "\n", 1);
	}
}
