FLAG = -Wall -Werror -Wextra
CC = gcc

aff_a: aff_a.o
	${CC} ${FLAG} -o aff_a aff_a.o

aff_a.o: aff_a.c
	${CC} ${FLAG} -c aff_a.c

clean:
	rm -rf *.o

fclean: clean
	rm -rf aff_a
.PHONY: clean fclean