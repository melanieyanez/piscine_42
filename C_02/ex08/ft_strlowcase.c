/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:39:33 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/05 19:44:33 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	char	tab[] = "Foxes Forever";

	printf("%s\n", tab);
	ft_strlowcase(tab);
	printf("%s", tab);
	return (0);
}
