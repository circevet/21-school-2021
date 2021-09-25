NAME = rev_print
OBJ = rev_print.o main.o
SRC = rev_print.c main.c
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