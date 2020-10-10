all: expressoes

expressoes: expressoes.o lista.o pilha.o
	gcc expressoes.o lista.o pilha.o -lm -o expressoes

expressoes.o: expressoes.c lista.h pilha.h
	gcc -Wall -Werror -c expressoes.c

lista.o: lista.c lista.h
	gcc -Wall -Werror -c lista.c

%.o: %.c %.h
	gcc -Wall -Werror -c $<