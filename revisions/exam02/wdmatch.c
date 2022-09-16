/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:35:19 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 19:27:02 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while (str[count])
		count ++;
	return (count);
}

int	main(int argc, char *argv[])
{
	int i;
	int	j;
	int	nb_char;
	
	i = 0;
	j = 0;
	nb_char = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					nb_char ++;
					break;
				}
				j ++;
			}
			i ++;
		}
		if (nb_char == ft_strlen(argv[1]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}




