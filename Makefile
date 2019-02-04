all: command

command: jgarcia_argtok.o jgarcia_prog1.o 
	gcc jgarcia_argtok.o jgarcia_prog1.o -o command

jgarcia_argtok.o: jgarcia_argtok.c
	gcc -c jgarcia_argtok.c jgarcia_argtok.h

jgarcia_prog1.o: jgarcia_prog1.c
	gcc -c jgarcia_prog1.c

clean:
	rm -f *o command

demo: command
	./command


