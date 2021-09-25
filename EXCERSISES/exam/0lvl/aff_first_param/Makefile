NAME = aff_first_param
OBJ = aff_first_param.o main.o
SRC = aff_first_param.c main.c
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
