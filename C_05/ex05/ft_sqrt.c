/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:47:02 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/13 17:34:05 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
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
	printf("%d %f \n", ft_sqrt(0), sqrt(0));
	printf("%d %f \n", ft_sqrt(1), sqrt(1));
	printf("%d %f \n", ft_sqrt(26), sqrt(26));
	printf("%d %f \n", ft_sqrt(292219953), sqrt(2922219953));
	printf("%d %f \n", ft_sqrt(1640045925), sqrt(1640045925));
	printf("%d %f \n", ft_sqrt(2147395600), sqrt(2147395600));
}*/
