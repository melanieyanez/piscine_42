/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:14:03 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/05 19:55:21 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

int	main(void)
{
	char	*ptr_src;

	ptr_src = "Foxes Forever";
	char	ptr_dest[] = "aaaaaaaaaaaaa";

	printf("%s", ptr_dest);
	ft_strcpy(ptr_dest, ptr_src);
	printf("%s", ptr_dest);
	return (0);
}
