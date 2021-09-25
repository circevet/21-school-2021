NAME = hello
SRC = hello.c main.c
OBJ = hello.o main.o
FLAG = -Wall -Werror -Wextra
CC = gcc

${NAME}: ${OBJ}
	${CC} ${FLAG} -o ${NAME} ${OBJ}

${OBJ}: ${SRC}
	${CC} ${FLAG} -c ${SRC}

all: ${NAME}

clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${NAME}

.PHONY: all clean fclean
