.Phony: all clean

all:tac

tac: tac.c
	gcc -Wall -o $@ $^

clean:
	rm -f tac

cleanall:clean
	rm -f *~ test*

