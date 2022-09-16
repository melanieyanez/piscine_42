/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:40:30 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 11:09:42 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		write(1, "\n", 1);
	while (str[i])
	{
		i ++;
	}
	while (--i > -1)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
	return (str);
}

int	main (int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_rev_print(argv[1]);
}
