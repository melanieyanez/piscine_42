# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 16:07:20 by cemuller          #+#    #+#              #
#    Updated: 2022/09/18 17:59:26 by jchapell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= rush-02

SRC 	= ${wildcard *.c}

OBJS	= ${SRCS:.c=.o}

CCAF 	= cc -Wall -Wextra -Werror

RM		= rm -f

${NAME}:	${OBJS}
			${CCAF} -o ${NAME} ${SRC}
	
all: 		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean
