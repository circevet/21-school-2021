NAME = only_a
OBJ = only_a.o main.o
SRC = only_a.c main.c
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