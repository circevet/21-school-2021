NAME = ft_strlen
OBJ = ft_strlen.o main.o
SRC = ft_strlen.c main.c
CC = gcc
FLAG = -Wall -Werror -Wextra

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