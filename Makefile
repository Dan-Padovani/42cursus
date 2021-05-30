# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 19:23:16 by dpadovan          #+#    #+#              #
#    Updated: 2021/05/29 23:11:41 by dpadovan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

MYLIB	=	libft.h

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRCS:.c=.o}

LIB		=	ar -rcs

RM		=	rm -f

SRCS	=	${PART1} ${PART2}

PART1 	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strlcpy.c \
			ft_strchr.c ft_strrchr.c ft_strlcat.c ft_memset.c ft_bzero.c \
			ft_atoi.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memccpy.c \
			ft_memmove.c ft_strnstr.c ft_calloc.c ft_strdup.c

PART2	=	ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
			ft_substr.c
all:		${NAME}

${NAME}:	${OBJS} ${MYLIB} 
			${LIB} ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re