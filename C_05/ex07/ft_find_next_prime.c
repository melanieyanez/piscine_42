/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:41:29 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/13 17:50:43 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	nb2;

	nb2 = nb + 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb2) != 1)
		nb2 ++;
	return (nb2);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(-3554));
}*/
