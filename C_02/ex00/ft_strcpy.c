/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:14:03 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/07 09:13:25 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
/*#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ptr);
}

/*int	main(void)
{
	char	*ptr_src;

	ptr_src = "Foxes \n Forever";
	char	ptr_dest[50];
	char	ptr_dest2[50];


	ft_strcpy(ptr_dest, ptr_src);
	int	i = 0;
	while (i < 20)
	{
		printf("ptr_dest[%d] = %c %d\n",i, ptr_dest[i], ptr_dest[i]);
		i++;
	}

	strcpy(ptr_dest2, ptr_src);

	int j = 0;
	while (j < 20)
	{
		printf("ptr_dest2[%d] = %c %d\n", j, ptr_dest2[j], ptr_dest2[j]);
		j++;
	}
	return (0);	
}*/
