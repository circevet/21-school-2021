# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 21:28:39 by mmicheli          #+#    #+#              #
#    Updated: 2021/09/13 21:30:53 by mmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = main.c ft_cat.c
OBJ = main.o ft_cat.o
FLAG = -Wall -Werror -Wextra
CC = gcc
${NAME}: ${OBJ}
	${CC} ${FLAG} -o ${NAME} ${OBJ} 

${OBJ}: ${SRC}
	${CC} ${FLAG} -c ${SRC}

all: ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

.PHONY: all clean fclean