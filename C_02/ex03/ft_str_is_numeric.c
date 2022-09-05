/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:06:27 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/05 19:51:02 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	int	result;
	char	*tab = "12345";

	result = ft_str_is_numeric(tab);
	printf("%d", result);
	return (0);
}
