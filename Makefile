all: command

command: tokenizer.o command.o history.o
	gcc tokenizer.o command.o history.o -o command

tokenizer.o: tokenizer.c
	gcc -c tokenizer.c tokenizer.h

command.o: command.c
	gcc -c command.c

history.o: history.c
	gcc -c history.c history.h

clean:
	rm -f *o command

demo: command
	./command


