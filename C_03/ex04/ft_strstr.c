/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:41:07 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/07 16:27:49 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = NULL;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{	
			j = 0;
			while (to_find[j] == str[i + j])
			{
				if (to_find[j + 1] == '\0')
				{	
					return (&str[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	str[33] = "Les renards, c'est les meilleurs";
	char	to_find[8] = "renards";
	char	*resultmyfct;
	char	*resultbifct;

	resultmyfct = ft_strstr(str, to_find);
	resultbifct = strstr(str, to_find);
	printf("%s\n%s", resultmyfct, resultbifct);
	return (0);
}*/
