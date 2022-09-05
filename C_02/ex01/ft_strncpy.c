/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:11:53 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/05 19:53:41 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	int	n;
	char	*ptr_src;
	char	ptr_dest[] = "aaaaaaaaaaaaa";

	n = 10;
	ptr_src = "Foxes Forever";
	printf("%s", ptr_dest);
	ft_strncpy(ptr_dest, ptr_src, n);
	printf("%s", ptr_dest);
	return (0);
}
