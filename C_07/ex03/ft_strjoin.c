/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:51:39 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/12 19:52:49 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	
	tab = malloc(sizeof(char)*size);

	i = 0;
	while (*strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			tab[i][j] = 



			k ++;
			}
			j ++;
		}
		write(1, sep[0], 1);
		i ++;
	}
}
