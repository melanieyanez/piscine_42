/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:59:01 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/16 11:51:45 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] =='\r' || str[i] == ' ')
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		sign = sign * -1;
		i ++;
	}

	while (str[i])
	{
 		while (str[i] >= '0' && str[i] <= '9')
		{
			result = 10 * result + str[i] - '0';
			i ++;
		}
	}
	return (sign * result);	
}

int	main(void)
{
	char	str[] = "-+---+-5416566";	
	printf("%d", ft_atoi(str));
	return (0);
}
