/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:45:37 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 21:41:59 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	extension1(char *dict, char *str, int tmp, int i)
{
	char	*t;

	t = malloc(sizeof(char) * 2);
	if (str[i] == '1' && str[i + 1] != 0)
	{
		t[0] = str[i];
		t[1] = str[i + 1];
		putstr(dict, ft_find_index_lit(dict, t));
	}
	else
	{
		t[0] = str[i];
		t[1] = '0';
		putstr(dict, ft_find_index_lit(dict, t));
		if (str[i + 1] != '0')
			putstr(dict, ft_find_index_nb(dict, str[i + 1]));
	}
	i += 1;
	tmp -= 1;
	which_ten(dict, tmp, str[i]);
	i += 1;
	return (i);
}

int	extension2(char *dict, char *str, int tmp, int i)
{
	char	*t;

	t = malloc(sizeof(char) * 2);
	putstr(dict, ft_find_index_nb(dict, str[i]));
	which_ten(dict, tmp - (3 * to_end_str(str, i + 3) / 3), str[i]);
	if (str[i + 1] == '1' && str[i + 2] != 0)
	{
		t[0] = str[i + 1];
		t[1] = str[i + 2];
		putstr(dict, ft_find_index_lit(dict, t));
	}
	else
	{
		t[0] = str[i + 1];
		t[1] = '0';
		if (str[i + 1] != '0')
			putstr(dict, ft_find_index_lit(dict, t));
		if (str[i + 2] != '0')
			putstr(dict, ft_find_index_nb(dict, str[i + 2]));
	}
	i += 2;
	tmp -= 2;
	which_ten(dict, tmp, str[i]);
	return (i + 1);
}

int	extension3(char *dict, char *str, int tmp, int i)
{
	char	*t;

	t = malloc(sizeof(char) * 2);
	if (tmp == 5 + (3 * (to_end_str(str, i + 2) / 3 - 1)))
	{
		i = extension1(dict, str, tmp, i);
		return (i);
	}
	if (tmp == 6 + (3 * (to_end_str(str, i + 3) / 3 - 1)))
	{
		i = extension2(dict, str, tmp, i);
		return (i);
	}
	if (tmp == 2)
	{
		if (str[i] == '1' && str[i + 1] != 0)
		{
			t[0] = str[i];
			t[1] = str[i + 1];
			putstrns(dict, ft_find_index_lit(dict, t));
			return (-1);
		}
		which_ten(dict, tmp, str[i]);
	}
	return (0);
}

int	extension4(char *dict, char *str)
{
	if (ft_find_index(dict, str) != 0)
	{
		if (to_end_str(str, 0) > 2)
			putstr(dict, ft_find_index_nb(dict, str[0]));
		putstrn(dict, ft_find_index_lit(dict, str));
		return (1);
	}
	return (0);
}

void	putnbr(char *dict, char *str, int i)
{
	int		tmp;
	int		res;

	res = 0;
	if (extension4(dict, str) == 1)
		return ;
	while (str[i])
	{
		tmp = to_end_str(str, i);
		if (str[i] != '0')
		{
			res = extension3(dict, str, tmp, i);
			if (res > 0)
			{
				i = res;
				continue ;
			}
			else if (res == -1)
				break ;
			if (str[i] != '0')
				mini_put(dict, str, tmp, i);
		}
		i++;
	}
	write(1, "\n", 1);
}
