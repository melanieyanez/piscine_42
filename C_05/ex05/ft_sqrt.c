/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:47:02 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/12 16:48:18 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	while (i <= nb / 2 && i <= 46341)
	{	
		if (i * i == nb)
			return (i);
		i ++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(26));
	printf("%d\n", ft_sqrt(292219953));
}*/
