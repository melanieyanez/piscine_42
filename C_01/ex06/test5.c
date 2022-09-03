/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:12:17 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/02 14:43:28 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char	*str)
{
	int	count;
	
	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	printf("le nombre de caracteres de ma chaine est %d", count);
	return (str);
}

int	main()
{
	char	*a;
	
	a = "abcdefghijklmnopqrstuvwxyz";
	ft_strrev(a);
	return (0);
}
