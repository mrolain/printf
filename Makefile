# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 14:12:40 by mrolain           #+#    #+#              #
#    Updated: 2024/05/14 14:20:44 by mrolain          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	./src/ft_printf.c \
		./src/ft_put_unsigned.c \
		./src/ft_putchar.c \
		./src/ft_puthex.c \
		./src/ft_puthex_p.c \
		./src/ft_putnbr.c \
		./src/ft_putstr.c \

OBJS = ${SRCS:.c=.o}


CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:		${NAME}

%.o:	%.c
		${CC} ${CFLAGS} -c $? -o $@
		
${NAME}:	${OBJS}
		ar rcs $@ $?
			
clean:
		@${RM} ${OBJS}
		
fclean:	clean
		@${RM} ${NAME}

re:		fclean all