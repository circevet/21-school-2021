NAME = maff_alpha
OBJ = maff_alpha.o main.o
SRC = maff_alpha.c main.c
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