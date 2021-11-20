all: 7

7: 7.o lista.o fila.o
	gcc 7.o lista.o fila.o -lm -o 7

7.o: 7.c lista.h fila.h
	gcc -Wall -Werror -c 7.c

lista.o: lista.c lista.h
	gcc -Wall -Werror -c lista.c

%.o: %.c %.h
	gcc -Wall -Werror -c $<