/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:48:35 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/09 15:28:28 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	count;
	int	i;
	int j;

	count = 0;
	while (argv[1][count] != '\0')
		count ++;

	i = count;
	
	printf("%d", i);
	
	/*
	while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i > 0)
	{
		i --;
		j = i;
	}
	write (1, &argv[1][i], 1);
	while ((argv[1][i] != ' ' || argv[1][i] != '\t') && i > 0)
	{
		i --;
	}
	write (1, &argv[1][i], 1);

	while (i < j)
	{
		write(1, &argv[1][i], 1);
		i ++;
	}
	write(1, "\n", 1);*/
}
