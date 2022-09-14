/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:51:39 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/14 13:09:21 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	check_size(char *tab, int size)
{
	if (size == 0)
	{
		return (1);
	}
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;
	int		l;

	tab = malloc(sizeof(char) * size);
	if (check_size(tab, size) == 1)
		return (tab);
	i = 0;
	k = 0;
	while (strs[++i])
	{
		j = -1;
		while (strs[i][++j])
			tab[k++] = strs[i][j];
		l = -1;
		while (sep[++l])
		{
			if (i != size)
				tab[k++] = sep[l];
		}
	}
	return (tab);
}

/*int	main(int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(3, argv, " abc "));
}*/
