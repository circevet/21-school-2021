# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 13:46:08 by mmicheli          #+#    #+#              #
#    Updated: 2021/09/13 18:04:18 by mmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = main.c ft_display_file.c
OBJ = main.o ft_display_file.o
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