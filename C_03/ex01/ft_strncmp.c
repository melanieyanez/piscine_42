/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:24:18 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/10 14:26:36 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char			s1[] = "0123456789";
	char			s2[] = "0133458";
	int				resultmyfct;
	int				resultbifct;
	unsigned int	n;

	n = 2;
	resultmyfct = ft_strncmp(s1, s2, n);
	resultbifct = strncmp(s1, s2, n);
	printf("%d\n%d", resultmyfct, resultbifct);
	return (0);
}*/
