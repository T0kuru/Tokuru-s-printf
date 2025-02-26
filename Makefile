# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 18:30:08 by lzabolot          #+#    #+#              #
#    Updated: 2025/02/25 23:00:29 by lzabolot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_sub1.c ft_printf_itoa.c
#SRCB = *.c
#OBJSB = ${SRCB:.c=.o}
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a

#LIBFT_DIR = Libft
#LIBFT = ${LIBFT_DIR}/libft.a

LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} #${LIBFT}
	${LIBC} ${NAME} ${OBJS}

#${LIBFT}:
#	make -C ${LIBFT_DIR}

all: ${NAME}

#bonus: ${OBJSB}
#	${LIBC} ${NAME} ${OBJSB} ${LIBFT}

clean:
	${RM} ${OBJS} ${OBJSB}
#	make -C ${LIBFT_DIR} clean

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY : all bonus clean fclean re
