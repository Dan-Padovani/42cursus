# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 19:49:59 by dpadovan          #+#    #+#              #
#    Updated: 2021/05/19 00:30:14 by dpadovan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c fct.c

OBJS	=	${SRCS:.c=.o}

NAME	=	hello

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} 
	
all:		${NAME}	


clean:
	rm ${OBJS}
	

