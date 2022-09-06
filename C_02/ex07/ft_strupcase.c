/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:36:42 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/06 15:38:54 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str_ptr);
}

/*int	main(void)
{	
	char	tab[] = "Foxes Forever";

	printf("%s\n", tab);
	ft_strupcase(tab);
	printf("%s", tab);
	return (0);
}*/
