# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/07 00:06:15 by hjung             #+#    #+#              #
#    Updated: 2021/02/10 18:47:59 by hjung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = philo_two
SRCS =	main.c \
		parse.c \
		init.c \
		philo.c \
		msg.c \
		monitor_all_philos.c \
		utils.c
C_FLAG = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}
LIBS = -lpthread

.c.o:
	${CC} ${C_FLAG} -c $< -o ${<:.c=.o} -I ./incs/

${NAME}: ${OBJS}
	$(CC) $(C_FLAG) $(OBJS) -o $(NAME) ${LIBS}

all: ${NAME}

clean :
	/bin/rm -f ${OBJS}

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o