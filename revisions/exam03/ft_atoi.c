/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:47:53 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 15:32:57 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;

	if (str[i] == '-')
		sign = sign * - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		i ++;
	}

	return (sign * result);
}

int	main (void)
{
	char str[] = "-2147483648";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", INT_MIN);

}
