/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:51:39 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/19 10:37:28 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size ++;
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	size_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i ++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	if (size == 0)
		return (1);
	i = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i ++;
	}
	result = result + ft_strlen(sep) * (size - 1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * get_size(size, strs, sep));
	if (!tab || size < 0)
		return (NULL);
	if (size == 0)
		return (tab);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i ++;
	}
	return (tab);
}

/*int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", ft_strjoin(0, argv, ", "));
}*/

/*int	main(void)
{
	char	*strs[5];
	int		size = 5;
	char	*sep = ";";

	strs[0] = "a";
	strs[1] = "b";
	strs[2] = "c";
	strs[3] = "dfdfdffd";
	strs[4] = "ccccc";
	char	*dest = ft_strjoin(size, strs, sep);
	printf("dest = %s", dest);
	free(dest);
	return (0);
}*/
