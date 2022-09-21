/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:20:59 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 12:29:09 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i ++;
	}

	while (i >= 0)
	{
		write (1, &str[i], 1);
		i --;
	}
	return (str);
}

int	main (void)
{
	char	str[] = "Melanie va tuer Victor";

	ft_rev_print(str);
}
