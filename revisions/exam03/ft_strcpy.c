/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:19:43 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 13:26:26 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i ++;
	}
	s1[i] = '\0';
	return (s1);
}


int	main(void)
{
	int	i;
	char dest[6];
	char src[] = "salut";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
