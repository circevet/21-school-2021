NAME = rot_13
OBJ = rot_13.o main.o
SRC = rot_13.c main.c
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