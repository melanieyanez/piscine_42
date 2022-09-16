/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:25:40 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 10:31:05 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char 	*str)
{
	int	size;

	size = 0;
	while (str[size])
		size ++;
	
	return (size);
}

int	main(void)
{
	char	str[] = "blabloublabloublou";

	printf("%d\n", ft_strlen(str));
}
