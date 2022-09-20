/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:40:40 by jchapell          #+#    #+#             */
/*   Updated: 2022/09/18 21:39:17 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPE_H
# define PROTOTYPE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*parse(char *file_path);
void	putstr(char *str, int n);
void	putstrn(char *str, int n);
void	putstrns(char *str, int n);
void	putnbr(char *dict, char *str, int i);
int		to_end_rel(char *dict, int place);
int		to_end_str(char *str, int n);
void	which_ten(char *dict, int objectif, char c);
int		ft_find_index(char *src, char *chrch);
int		ft_find_index_lit(char *src, char *chrch);
int		ft_find_index_nb(char *src, char chrch);
int		dictlen(char *file_path);
int		ft_str_is_numeric(char *str);
void	print_zero(char *path_dict);
int		ft_strcmp(char *s1, char *s2);
void	which_dict(char *path_dict, char *value);
void	mini_put(char *dict, char *src, int tmp, int i);

#endif