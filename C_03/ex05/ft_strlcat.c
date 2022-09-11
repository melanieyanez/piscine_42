/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:44:17 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/10 14:24:27 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && size != 0 && i + j < size -1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size < i)
		return (size + j);
	return (i + j);
}

/*int	main(void)
{
	char			s1[100] = "Les renards, ";
	char			s3[100] = "Les renards, ";
	char			s2[100] = "c'est les meilleurs des meilleurs";
	char			s4[100] = "c'est les meilleurs des meilleurs";
	unsigned int	size = 100;

	//ft_strlcat(s1, s2, size);
	printf("ma fonction %d", ft_strlcat(s1, s2, size));
	//strlcat(s3, s2, size);
	printf("la fonction %ld", strlcat(s3, s4, size));
	printf("%s\n%s\n", s1, s3);
	printf("%d\n", s1[32]);
	return (0);
}*/
