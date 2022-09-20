/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 08:58:46 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 17:54:17 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_str_is_numeric(argv[1]) == 1)
	{
		if (ft_strcmp(argv[1], "0") == 0)
			print_zero("numbers.dict");
		else
			which_dict("numbers.dict", argv[1]);
	}
	else if (argc == 3 && ft_str_is_numeric(argv[2]) == 1)
	{
		if (ft_strcmp(argv[2], "0") == 0)
			print_zero(argv[1]);
		else
			which_dict(argv[1], argv[2]);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
