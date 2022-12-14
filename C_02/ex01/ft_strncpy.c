/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:11:53 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/06 10:29:34 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}		
	return (dest);
}

/*int	main(void)
{
	int	n;
	char	*ptr_src;
	char	ptr_dest[] = "aaaaaaaaaaaaaaaaaaaaaa";

	n = 18;
	ptr_src = "Foxes Forever";
	printf("%s\n", ptr_dest);
	ft_strncpy(ptr_dest, ptr_src, n);
	printf("%s\n", ptr_dest);
	printf("%d\n", ptr_dest[17]);
	return (0);
}*/
