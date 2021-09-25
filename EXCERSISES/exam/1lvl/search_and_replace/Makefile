NAME = search_and_replace
OBJ = search_and_replace.o main.o
SRC = search_and_replace.c main.c
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