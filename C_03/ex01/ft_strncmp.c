/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:24:18 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/07 12:30:57 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char	s1[] = "abcde1";
	char	s2[] = "abcd";
	int	resultmyfct;
	int	resultbifct;
	unsigned int	n;

	n = 6;
	resultmyfct = ft_strncmp(s1, s2, n);
	resultbifct = strncmp(s1, s2, n);
	printf("%d\n%d", resultmyfct, resultbifct);
	return (0);
}
