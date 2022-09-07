/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:54:42 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/07 10:54:59 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	if_min(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		if (!(*(str - 1) >= 'a' && *(str - 1) <= 'z'))
		{	
			if (!(*(str - 1) >= 'A' && *(str - 1) <= 'Z'))
			{
				if (!(*(str - 1) >= '0' && *(str - 1) <= '9'))
					*str = *str - 32;
			}
		}
	}
}

void	if_maj(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		if ((*(str - 1) >= 'a' && *(str - 1) <= 'z')
			|| (*(str -1) >= 'A' && *(str -1) <= 'Z')
			|| (*(str - 1) >= '0' && *(str - 1) <= '9'))
		{
			*str = *str + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	str++;
	while (*str != '\0')
	{
		if_min(str);
		if_maj(str);
		str++;
	}
	return (str_ptr);
}

int	main(void)
{
	char	tab[] = "---sut, 777comMent [tu ~vs ? 42mts {quate-deux; cinqu";

	printf("%s\n", tab);
	ft_strcapitalize(tab);
	printf("%s", tab);
	return (0);
}
