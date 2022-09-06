/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:29:17 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/06 20:24:26 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}




int main(void)
{
	char	s1[33] = "Les renards, ";
	char	s2[19] = "c'est les meilleurs";

	ft_strcat(s1, s2);
	printf("%s\n", s1);
	printf("%d", s1[32]);
	return(0);	
}
