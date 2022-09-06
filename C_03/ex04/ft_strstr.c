/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:41:07 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/06 21:17:41 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	
	j = 0;
	while (str[i] != '\0')
	{
		if (str[j] == to_find[i])
		{
			while (to_find[j] != '\0')


		}	
		j++;
	}
}

int	main(void)
{
	char	str[32] = "Les renards, c'est les meilleurs";
	char	to_find[7] = "renards";
	
	ft_strstr(str, to_find);

}
