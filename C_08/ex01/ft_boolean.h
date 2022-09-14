/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:16:34 by myanez-p          #+#    #+#             */
/*   Updated: 2022/09/13 18:35:38 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define SUCCESS 0
# define EVEN(VAR) ((VAR % 2) == 0 ? 1 : 0)

typedef int	t_bool;
#endif
