/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:41:13 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/16 10:56:47 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	size;
	int	i;
	char temp;

	size = 0;
	while (str[size])
	{
		size ++;
	}

	i = 0;
	while (i != size/2)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i ++;
	}

	return (str);
}

int	main(void)
{
	char	str[] = "Haricot vert";

	printf("%s\n", str);
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
