/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:16:28 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/21 19:50:55 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	int	file;
	
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (-1);
	}
	file = open(argv[2], O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
	   	return (-1);
	}

	




}
