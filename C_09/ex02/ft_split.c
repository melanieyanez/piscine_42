/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:36:01 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 13:07:28 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size ++;
	return (size);
}

int	ft_strccmp(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_nb_word(char *str, char *charset)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (str[i])
	{
		if (ft_strccmp(charset, str[i]) == 1)
			i ++;
		if (ft_strccmp(charset, str[i]) == 0 && str[i])
		{
			nb ++;
			while (ft_strccmp(charset, str[i]) == 0 && str[i])
				i ++;
		}
	}
	return (nb + 1);
}

char	*get_next_wd(char *str, char *charset, int *index)
{
	char	*result;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (ft_strccmp(charset, str[*index]) == 1 && str[*index])
	{
		(*index)++;
	}
	while (str[*index + size] && ft_strccmp(charset, str[*index + size]) == 0)
	{
		size ++;
	}
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = str[*index];
		i ++;
		(*index)++;
	}	
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		nb_wd;

	nb_wd = get_nb_word(str, charset);
	tab = malloc(nb_wd * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < nb_wd - 1)
	{
			tab[i] = get_next_wd(str, charset, &j);
			i ++;
	}	
	tab[i] = 0;
	return (tab);
}

/*int	main(void)
{
	char	**dest;
	int		i;

	char	str[] = "e aaa e aaa e aaa e aaa e";
	char	charset[] = "e";

	dest = ft_split(str, charset);
	i = 0;
	while (i < get_nb_word(str, charset))
	{
		printf("%s\n", dest[i]);
		i ++;
	}
}*/
