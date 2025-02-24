# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 18:30:08 by lzabolot          #+#    #+#              #
#    Updated: 2025/02/24 20:04:22 by lzabolot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = *.c
#SRCB = *.c
#OBJSB = ${SRCB:.c=.o}
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

#bonus: ${OBJSB}
#	${LIBC} ${NAME} ${OBJSB}

clean:
	${RM} ${OBJS} ${OBJSB}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY : all bonus clean fclean re
