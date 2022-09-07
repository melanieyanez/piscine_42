/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:50:34 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/07 12:30:05 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char	s1[] = "abcde1";
	char	s2[] = "abcde2";
	int	resultmyfct;
	int	resultbifct;

	resultmyfct = ft_strcmp(s1, s2);
	resultbifct = strcmp(s1, s2);
	printf("%d\n%d", resultmyfct, resultbifct);
	return (0);
}
