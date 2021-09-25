NAME = ulstr
OBJ = main.o ulstr.o
SRC = main.c ulstr.c
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