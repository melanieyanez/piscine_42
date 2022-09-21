# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myanez-p <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 14:52:37 by myanez-p          #+#    #+#              #
#    Updated: 2022/09/21 09:28:16 by myanez-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
HEADERS = includes

RM = rm -f

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o :
		${GCC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}
		

all : ${NAME}

clean :
		${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re : fclean all

.PHONY : re fclean clean all
