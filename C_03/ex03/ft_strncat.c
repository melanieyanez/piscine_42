/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:25:45 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/07 16:27:40 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}	
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char			s1[41] = "Les renards, ";
	char			s2[] = "c'est les meilleurs du monde";
	unsigned int	nb;


	nb = 19;
	ft_strncat(s1, s2, nb);
	printf("%s\n", s1);
	printf("%d", s1[20]);
	return (0);
}*/
