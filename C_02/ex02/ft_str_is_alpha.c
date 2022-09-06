/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:58:17 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/06 10:30:48 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int	result;
	char	*tab = "Foxes Forever";

	result = ft_str_is_alpha(tab);
	printf("%d", result);
	return (0);
}*/
