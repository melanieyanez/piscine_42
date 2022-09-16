/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:35:56 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/15 15:06:01 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	int end_word;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (argv[1][i])
			i ++;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i --;
		end_word = i;
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
			i --;
		while (++i != end_word)
			write(1, &argv[1][i], 1);
		write(1, "\n", 1);
	}
}
