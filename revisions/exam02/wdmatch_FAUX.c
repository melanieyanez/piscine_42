/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:35:19 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 18:55:40 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int	count_char(char *str, char c, int n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < n)
	{
		if (str[i] == c)
			count ++;
		i ++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while (str[count])
		count ++;
	return (count);
}


int	compare_char(char *str1, char	*str2, char c)
{
	int	i;
	int count1;
	int	count2;

	i = 0;
	while (str1[i])
	{
		if (str1[i] == c)
			count1 ++;
		i ++;
	}

	i = 0;
	while (str2[i])
	{
		if (str2[i] == c)
			count2 ++;
		i ++;
	}
	if (count2 >= count1)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int i;
	int	j; 
	
	if (argc == 3)
	{
		i = 0;
		while (argv[2][i])
		{
			if (compare_char(argv[1], argv[2], argv[2][i]) == 0)
			{
				write(1, "\n", 1);
				return (0);
			}
			i ++;
		}

		i = 0;
		while (argv[2][i])
		{
			j = 0;
			while (argv[1][j])
			{
				if (argv[2][i] == argv[1][j])
				{
					if (count_char(argv[2], argv[2][i], i) < count_char(argv[1], argv[2][i], ft_strlen(argv[1])))
					{
						//printf("%d\n", ft_strlen(argv[1]));
						write(1, &argv[2][i], 1);
						break;
					}
				}

				j ++;
			}
			i ++;
		}
	}
	write(1, "\n", 1);
}
