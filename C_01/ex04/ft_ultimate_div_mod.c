/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:12:01 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/05 10:34:52 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a vaut %d et b vaut %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Le resultat est  %d et le reste est %d", a, b);
	return (0);
}*/
