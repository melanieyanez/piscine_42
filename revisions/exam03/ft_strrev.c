/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:39:45 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 13:47:22 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int i;
	int size;
	char	temp;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size ++;

	while (i <= size/2)
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
	char	str[] = "123456789";
	printf("%s\n", ft_strrev(str));

}
