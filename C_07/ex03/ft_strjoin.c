/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:51:39 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/20 10:35:35 by myanez-p         ###   ########.fr       */
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
	dest[size_dest + i] = 0;
	return (dest);
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	if (size == 0)
		return (1);
	i = 0;
	result = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i ++;
	}
	result = result + ft_strlen(sep) * (size - 1);
	printf(" result = %d\n", result);
	return (result + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * get_size(size, strs, sep));
	if (!tab)
		return (NULL);
	tab[0] = 0;
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
	tab[ft_strlen(tab)] = '\0';
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
	char	*sep = "1234";

	strs[0] = "lol";
	strs[1] = "pouic";
	strs[2] = "youpiiii";
	strs[3] = "dfdfdffd";
	strs[4] = "ccccc";
	char	*dest = ft_strjoin(size, strs, sep);
	printf("dest = %s", dest);
	free(dest);
	return (0);
}*/

/*int	main(void)
{
	char *strs[4];
	int	size = 4;
	char *sep = "1234";
	int i;

	strs[0] = "lol";
	strs[1] = "pouic";
	strs[2] = "";
	strs[3] = "youpiiiii";
	
	printf("%d\n", ft_strlen("absc"));
	char *dest = ft_strjoin(size, strs, sep);
	i = 0;
	while (dest[i] != '\0')
	{
		printf("%c\n", dest[i]);
		i ++;
	}
	free(dest);
}*/
