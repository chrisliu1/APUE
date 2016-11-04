CC=gcc
DEPS = vocabulary.h
CFLAGS=-I.
OBJ=lab.o CreateVocabulary.o FreeVocabulary.o

%.o: %.c $(DEPS)
	$(CC) -g -c -o  $@ $< $(CFLAGS)

query: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm *.o query

